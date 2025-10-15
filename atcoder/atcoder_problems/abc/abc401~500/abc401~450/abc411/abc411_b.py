N = int(input())
D = list(map(int, input().split()))
S = [0] * N
for i in range(1, N):
    S[i] = D[i-1]
    S[i] += S[i-1]

for i in range(N-1):
    for j in range(i+1, N):
        print(S[j] - S[i], end=" ")
    print()



# N = int(input())
# D = list(map(int, input().split()))

# for i in range(N-1):
#     for j in range(i+1, N):
#         ans = 0
#         for k in range(i, j):
#             ans += D[k]
#         print(ans, end=" ")
#     print()



# N = int(input())
# D = list(map(int, input().split()))

# for i in range(N):
#     s = 0
#     for j in range(i, N-1):
#         s += D[j]
#         print(s, end=" ")
#     print()