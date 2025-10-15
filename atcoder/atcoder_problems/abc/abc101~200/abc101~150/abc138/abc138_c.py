N = int(input())
v = list(map(int, input().split()))

v.sort()
ans = v[0]
for i in range(1,N):
    ans = float((ans + v[i]) / 2)
    

print(ans)
