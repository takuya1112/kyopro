N = int(input())

ans = 0
for i in range(1, N+1):
    if 1 <= i <= 9:
        ans += 1
    if 100 <= i <= 999:
        ans += 1
    if 10000 <= i <= 99999:
        ans += 1

print(ans)

# N = int(input())

# ans = 0
# for i in range(1,N+1):
#     s = str(i)
#     if len(s) % 2 == 1:
#         ans += 1

# print(ans)