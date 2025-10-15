N, X = map(int, input().split())
ans = 0

mn_ingredents = 1100
for i in range(N):
    ingredents = int(input())
    if ingredents < mn_ingredents:
        mn_ingredents = ingredents
    X -= ingredents
    ans += 1

ans += (X//mn_ingredents)


print(ans)