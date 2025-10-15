N, X = map(int, input().split())
A = list(map(int, input().split()))

A.sort()

ans = 0
if X > sum(A):
    ans -= 1


for a in A:
    if X >= a:
        X -= a
    else:
        break
    ans += 1
    



print(ans)
