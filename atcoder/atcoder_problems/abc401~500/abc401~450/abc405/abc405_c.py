N = int(input())
A = list(map(int, input().split()))

ans = 0
sum = 0
for i in range(N):
    ans += sum * A[i]
    sum += A[i]

print(ans)


# N = int(input())
# A = list(map(int, input().split()))
# A_sum_list = []

# A_sum = sum(A)
# minus = 0
# for i in range(N-1):
#     minus += A[i]
#     A_sum_list.append(A_sum - minus)


# ans = 0
# for i in range(N-1):
#     ans += A[i] * A_sum_list[i] 
# print(ans) 