ans = 0
for i in range(1, 13):
    s = input()
    c = len(s)
    if i == c:
        ans += 1

print(ans)