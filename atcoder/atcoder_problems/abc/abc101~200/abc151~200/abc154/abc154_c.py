N = int(input())
A = list(map(int, input().split()))
A.sort()

ok = True
for i in range(N-1):
    if A[i] == A[i+1]: ok = False

if ok:
    print("YES")
else:
    print("NO")



# N = int(input())
# S = set()
# A = list(map(int, input().split()))
# ok = True
# for i in range(N):
#     a = A[i]
#     if a in S: ok = False
#     S.add(a)

# if ok:
#     print("YES")
# else:
#     print("NO")


# N = int(input())
# A = set(map(int, input().split()))

# if N == len(A):
#     print("YES")
# else:
#     print("NO")