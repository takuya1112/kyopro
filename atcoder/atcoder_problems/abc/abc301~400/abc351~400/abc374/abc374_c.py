import sys
sys.setrecursionlimit(10010010)

n = int(input())
k = list(map(int, input().split()))
ans = float("INF")
a, b = 0, 0
print(k)
def dfs(pos):
    global a, b, ans
    if pos == n:
        print(a, b)
        ans = min(ans, max(a,b))
        return

    a += k[pos]
    dfs(pos+1)
    a -= k[pos]

    b += k[pos]
    dfs(pos+1)
    b -= k[pos]
    return


dfs(0)
print(ans)

# N = int(input())
# K = list(map(int, input().split()))

# ans = float("INF")
# for s in range(1 << N):
#     a, b = 0, 0
#     for i in range(N):
#         if s >> i & 1:
#             b += K[i]
#         else:
#             a += K[i]
#     now = max(a, b)
#     ans = min(ans, now)

# print(ans)


# N = int(input())
# K = list(map(int, input().split()))
# S = sum(K)

# ans = float("INF")
# for bit in range(1 << N):
#     A = 0
#     B = 0
#     for i in range(N):
#         if bit >> i & 1:
#             A += K[i]
#     B = S - A
#     if A > B:
#         ans = min(ans, A)
#     else:
#         ans = min(ans, B)
# print(ans)