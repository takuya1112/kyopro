N, A = map(int, input().split())
T = list(map(int, input().split()))


pre = 0
for i in range(N):
    ans = max(pre, T[i]) + A
    print(ans)
    pre = ans



# N, A = map(int, input().split())
# T = list(map(int, input().split()))


# pre = 0

# for i in range(0,N):
#     if T[i] - pre < 0:
#         pre = pre + A
#         print(pre)
        
#     else:
#         pre = T[i] + A
#         print(pre)