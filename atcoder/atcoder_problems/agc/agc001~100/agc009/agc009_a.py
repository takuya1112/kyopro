N = int(input())
A = [0] * N
B = [0] * N 
for i in range(N):
    a, b = map(int, input().split())
    A[i] = a
    B[i] = b

ans = 0
for i in range(N-1, -1, -1):
    a, b = A[i], B[i]
    k = (a + ans) % b
    ans += (b - k) % b

print(ans)



#mycode
# N = int(input())
# A = [0] * N
# B = [0] * N 
# for i in range(N):
#     a, b = map(int, input().split())
#     A[i] = a
#     B[i] = b


# cnt = 0
# for i in range(N-1, -1, -1):
#     a, b = A[i], B[i]
#     a += cnt
#     cnt += (b - a) % b
# print(cnt)