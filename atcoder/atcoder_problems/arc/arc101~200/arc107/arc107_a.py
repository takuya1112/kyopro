A, B, C = map(int, input().split())

D = A * (A + 1) // 2
E = B * (B + 1) // 2
F = C * (C + 1) // 2

ans = (D * E * F) % 998244353 
print(ans)

#TLE
# A, B, C = map(int, input().split())

# ans = 0
# for a in range(1, A+1):
#     for b in range(1, B+1):
#         for c in range(1, C+1):
#             ans += a * b * c
#             ans %= 998244353

# print(ans)