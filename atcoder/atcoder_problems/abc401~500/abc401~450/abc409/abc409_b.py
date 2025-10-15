N = int(input())
A = list(map(int, input().split()))

for x in range(N, -1, -1):
    count = 0
    for a in A:
        if a >= x:
            count += 1
    if count >= x:
        print(x)
        break



# N = int(input())
# A = list(map(int, input().split()))

# A_list = [0] * (N+1)
# for i in range(N):
#     for j in range(N+1):
#         if A[i] >= j:
#             A_list[j] += 1

# ans = 0
# for i in range(len(A_list)):
#     if A_list[i] >= i:
#         ans = i

# print(ans)