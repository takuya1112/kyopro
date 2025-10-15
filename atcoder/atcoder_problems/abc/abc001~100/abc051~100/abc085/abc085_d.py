# N, H = map(int, input().split())
# A = [0] * N
# B = [0] * N
# for i in range(N):
#     a, b = map(int, input().split())
#     A[i] = a
#     B[i] = b

# amax = max(A)
# ans = H
# B.sort(reverse=True)
# for k in range(N+1):
#     if k > 0: H-= B[k-1]
#     cnt = 0
#     if H > 0: cnt = ((H + amax -1) // amax)
#     ans = min(ans, k + cnt)
# print(ans)



#mycode 
# N, H = map(int, input().split())
# A = [0] * N
# B = [0] * N
# for i in range(N):
#     a, b = map(int, input().split())
#     A[i] = a
#     B[i] = b

# amax = max(A)
# B.sort(reverse=True)

# ans = 0
# for i in range(N):
#     if amax > B[i]: continue
#     H -= B[i]
#     ans += 1
#     if H <= 0:
#         print(ans)
#         exit()

# ans += (H + amax -1) // amax
# print(ans)



N, H = map(int, input().split())
A = [0] * N
B = [0] * N
for i in range(N):
    a, b = map(int, input().split())
    A[i] = a
    B[i] = b

AB = []
for i in range(N):
    a, b = A[i], B[i]
    AB.append([a, b])

AB.sort()
B.sort(reverse=True)
strong = AB[-1]

cnt = 0
ans = 0
for i in range(N):
    if strong[0] > B[i]: continue
    H -= B[i]
    ans += 1
    if cnt >= H:
        print(ans)
        exit()

H -= cnt
ans += (H + strong[0] -1) // strong[0]
print(ans)
