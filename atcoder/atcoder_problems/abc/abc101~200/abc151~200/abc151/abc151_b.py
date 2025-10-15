N, K, M = list(map(int, input().split()))
A = list(map(int, input().split()))
A_sum = sum(A)
all_ave = M * N

ans = -1
for i in range(K + 1):
    if all_ave <= A_sum + i:
        ans = i
        break

print(ans)             



# N, K, M = list(map(int, input().split()))
# A = list(map(int, input().split()))
# A_sum = sum(A)

# ans = -1
# for i in range(K+1):
#     average = (A_sum + i) / N
#     if average >= M:
#         ans = i
#         break

# print(ans)