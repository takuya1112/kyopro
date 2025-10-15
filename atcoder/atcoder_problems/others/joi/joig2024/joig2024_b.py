N, D = map(int, input().split())
A = list(map(int, input().split()))
A.sort()

for i in range(0, 2 * N, 2):
    if A[i+1] - A[i] > D:
        print("No")
        exit()
print("Yes")


# N, D = map(int, input().split())
# A = list(map(int, input().split()))
# A.sort()

# for i in range(N):
#     if A[i*2+1] - A[i*2] > D:
#         print("No")
#         exit()
# print("Yes")