N, A, B = map(int, input().split())

ans = 0

for i in range(N+1):
    s = str(i)
    check = 0
    for j in range(len(s)):
        check += int(s[j])
    if A <= check <= B:
        ans += i

print(ans)



# N, A, B = map(int, input().split())
# ans = 0

# for i in range(1, N + 1):
#     i_list = list(str(i))
#     n = 0
#     for j in i_list:
#         n += int(j)
#     if n >= A and B >= n:
#         ans += i

# print(ans)