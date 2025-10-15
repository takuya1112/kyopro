N = int(input())
A = list(map(int, input().split()))
ans = [0] * N

for i in range(N):
    ans[A[i] -1] = i+1

for i in range(N):
    print(ans[i], end=" ")
print()



# N = int(input())
# A = list(map(int, input().split()))
# students_dic = {A[i-1]:i for i in range(1,N+1)}


# for i in range(1,N+1):
#     print(students_dic[i], end=" ")
# print()