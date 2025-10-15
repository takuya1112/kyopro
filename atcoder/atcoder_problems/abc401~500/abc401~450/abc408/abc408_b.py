N = int(input())
A = list(map(int, input().split()))
S = set(A)
ans = list(S)
ans.sort()
print(len(ans))
print(*ans)



# N = int(input())
# A = list(map(int, input().split()))
# A = set(A)
# A = sorted(A)
# print(len(A))
# for a in A:
#     print(a, end=" ")
# print()