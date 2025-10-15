n, m = map(int, input().split())
ac = [0] * n
wa = [0] * n

for i in range(m):
    p, s = input().split()
    p = int(p)
    p -= 1
    if ac[p]: continue
    if s == "AC":
        ac[p] = 1
    else:
        wa[p] += 1

AC = 0
WA = 0
for i in range(n):
    AC += ac[i]
    if ac[i]: 
        WA += wa[i]

print(AC, WA)



# N, M = map(int, input().split())
# cnt = {i:0 for i in range(10 ** 5 + 10)}
# checked = set()
# ac = 0
# wa = 0
# for i in range(M):
#     p, s = map(str, input().split())
#     p = int(p)
#     if p in checked: continue
#     if s == "WA":
#         cnt[p] += 1
#     else:
#         ac += 1
#         wa += cnt[p]
#         checked.add(p)

# print(ac, wa)