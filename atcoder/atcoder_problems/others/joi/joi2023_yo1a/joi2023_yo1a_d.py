N = int(input())
A = list(map(int, input().split()))

check = [0] * N

for i in range(2 * N - 1):
    check[A[i] - 1] += 1

print(check)

for i in range(N):
    if check[i] == 1:
        print(i+1)


# N = int(input())
# A = list(map(int, input().split()))

# A_dic = {}
# for i in range(2 * N-1):
#     if A[i] not in A_dic:
#         A_dic[A[i]] = 1
#     else:
#         A_dic[A[i]] += 1


# for i in A_dic:
#     if A_dic[i] == 1:
#         print(i)

