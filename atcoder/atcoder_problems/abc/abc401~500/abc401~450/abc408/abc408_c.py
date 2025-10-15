N, M = map(int, input().split())
s = [0] * (N + 1)

for i in range(M):
    l, r = map(int, input().split())
    l -= 1
    s[l] += 1
    s[r] -= 1

for i in range(N):
    s[i+1] += s[i]

print(min(s[:N]))



#TLE
# N, M = map(int, input().split())
# L = []
# R = []

# for i in range(M):
#     l, r = map(int, input().split())
#     l -= 1
#     r -= 1
#     L.append(l)
#     R.append(r)

# L_R = [0] * N
# for i in range(M):
#     l = L[i]
#     r = R[i]
#     for j in range(l, r+1):
#         L_R[j] += 1

# print(min(L_R))

    
