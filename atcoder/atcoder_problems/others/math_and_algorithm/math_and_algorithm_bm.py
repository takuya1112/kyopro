N = int(input())
ans = 0

ans += (N // 10000)
N %= 10000

ans += (N // 5000)
N %= 5000

ans += (N // 1000)
N %= 1000

print(ans)



# N = int(input())
# count = 0

# while N > 0:
#     if N >= 10000:
#         N -= 10000
#         count += 1
#     elif N >= 5000:
#         N -= 5000
#         count += 1
#     elif N >= 1000:
#         N -= 1000
#         count += 1

# print(count) 