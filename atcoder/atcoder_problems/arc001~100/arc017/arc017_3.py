from collections import defaultdict

N, X = map(int, input().split())
A = []
B = []

for i in range(N):
    w = int(input())
    if i % 2 == 0:
        A.append(w)
    else:
        B.append(w)

def has_bit(n, i):
    return (n & (1 << i) > 0)


dic = defaultdict(int)
for n in range(1 << len(B)):
    s = 0
    for i in range(N):
        if has_bit(n, i):
            s += B[i]
    dic[s] += 1


ans = 0
for n in range(1 << len(A)):
    s = 0
    for i in range(N):
        if has_bit(n, i):
            s += A[i]
    ans += dic[X-s]


print(ans)


# N, X = map(int, input().split())
# W = [int(input()) for _ in range(N)]

# ans = 0
# for bit in range(1 << N):
#     s = 0
#     for i in range(N):
#         if bit >> i & 1:
#             s += W[i]

#     if s == X:
#         ans += 1

# print(ans)