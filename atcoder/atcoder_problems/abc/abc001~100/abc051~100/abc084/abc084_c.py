N = int(input())
C = []
S = []
F = []

for _ in range(N-1):
    c, s, f = map(int, input().split())
    C.append(c)
    S.append(s)
    F.append(f)

def calc(i, t):
    min_f_mul = max((t + F[i] -1) // F[i] * F[i], S[i])
    return min_f_mul + C[i]


for i in range(N):
    res = 0
    for j in range(i, N-1):
        res = calc(j, res)
    print(res)




# N = int(input())
# N -= 1 
# C = []
# S = []
# F = []

# for _ in range(N):
#     c, s, f = map(int, input().split())
#     C.append(c)
#     S.append(s)
#     F.append(f)

# for i in range(N):
#     ans = 0
#     for j in range(i, N):
#         ans = max(ans, S[j])

#         d = ans - S[j]
#         if d % F[j]:
#             d = F[j] - (d % F[j])
#         else:
#             d = 0
#         ans += d + C[j]
#     print(ans)
# print(0)


# N = int(input())
# CSF = [list(map(int, input().split())) for _ in range(N-1)]
# CSF.append([0, 0, 0])

# for i in range(N):
#     ans = 0
#     C1, S1, F1 = CSF[i]
#     ans += S1 + C1
#     for j in range(i+1, N):
#         C2, S2, F2 = CSF[j]
#         if C2 == 0:
#             S2 = ans
#         else:
#             while ans > S2:
#                 S2 += F2
#         ans = S2 + C2
#     print(ans)
