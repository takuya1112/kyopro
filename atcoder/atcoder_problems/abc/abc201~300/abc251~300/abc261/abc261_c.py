N = int(input())
cnt = {}
for _ in range(N):
    s = input()
    ans = s
    if s in cnt:
        ans += f"({cnt[s]})"
    else:
        cnt[s] = 0 
    cnt[s] += 1
    print(ans)


# N = int(input())
# Map = {}

# for _ in range(N):
#     s = input()
#     if s not in Map:
#         print(s)
#         Map[s] = 1
#     else:
#         t = s + f"({Map[s]})"
#         print(t)
#         Map[s] += 1
