N = int(input())
A = list(map(int, input().split()))

exist = [False] * 200020
for a in A:
    exist[a] = True

for i in range(1, 200001):
    if exist[i] and exist[i+3] and exist[i+6]:
        print("Yes")
        exit()

print("No")



# N = int(input())
# A = list(map(int, input().split()))
# A.sort
# a = set(A)

# for i in range(N):
#     if A[i] + 3 in a and A[i] + 6 in a:
#         print("Yes")
#         exit()

# print("No") 