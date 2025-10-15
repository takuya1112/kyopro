def solve():
    N = int(input())
    A = list(map(int, input().split()))
    A = sorted(A, key=abs)

    ok = True
    for i in range(N-2):
        if A[i+1] * A[i+1] != A[i] * A[i+2]: ok = False
    if ok: return True

    if (abs(A[0]) == abs(A[-1])):
        pos, neg = 0, 0
        for i in range(N):
            if A[i] < 0: neg +=1 
            else: pos += 1
        if abs(neg - pos) <= 1: return True
    
    return False


T = int(input())
for _ in range(T):
    if solve(): print("Yes")
    else: print("No")




#mycode worng ans
# T = int(input())
# for _ in range(T):
#     N = int(input())
#     A = list(map(int, input().split()))
#     s = set()
#     for i in range(N):
#         if A[i] < 0:
#             A[i] *= -1
#             s.add(A[i])
#     A.sort()
#     r = 0
#     ok = True
#     for i in range(N-1):
#         a = A[i]
#         b = A[i + 1]
#         if A[i] in s:
#             a *= -1
#         if A[i + 1] in s:
#             b *= -1
       
#         if i == 0: r = b / a
#         if b / a!= r: ok = False

#     if ok:
#         print("Yes")
#     else:
#         print("No")