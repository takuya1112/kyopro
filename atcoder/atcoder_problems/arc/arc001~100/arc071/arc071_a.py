N = int(input())
S = [input() for _ in range(N)]

ans = ""
for a in range(ord("a"), ord("z")+1):
    count = 100
    for s in S:
        count = min(count, s.count(chr(a)))
    ans += chr(a) * count


print(ans)