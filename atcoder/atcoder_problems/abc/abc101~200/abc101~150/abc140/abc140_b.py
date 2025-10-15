N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

ans = 0
pre = -2
for a in A:
    a -= 1
    ans += B[a]
    if pre + 1 == a:
        ans += C[pre]
    pre = a

print(ans)