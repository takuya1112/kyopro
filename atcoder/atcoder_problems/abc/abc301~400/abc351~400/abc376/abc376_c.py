N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
A.sort()
B.sort()

def judge(x):
    nb = B.copy()
    nb.append(x)
    nb.sort()
    for i in range(N):
        if A[i] > nb[i]:
            return False
    return True 
    

INF = 1001001001
ac = INF
wa = 0

while ac-wa > 1:
    wj = (wa+ac) // 2
    if judge(wj):
        ac = wj
    else:
        wa = wj

if ac == INF: print(-1)
else: print(ac)



# N = int(input())
# A = list(map(int, input().split()))
# B = list(map(int, input().split()))

# A.sort(reverse=True)
# B.sort(reverse=True)
# ans = 0
# for i in range(N-1):
#     if A[i] > B[i]:
#         B.append(A[i])
#         ans = A[i]
#         break
# if len(B) < N:
#     B.append(A[-1])
#     ans = A[-1]

# B.sort(reverse=True)

# for i in range(N):
#     if A[i] > B[i]:
#         print(-1)
#         exit()
# print(ans)