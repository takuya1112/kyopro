n = int(input())
k = 0

while (1 << k) <= n:
    k += 1
print(k-1)


# n = int(input())
# x = 1
# k = 0
# while x*2 <= n:
#     x *= 2
#     k += 1
# print(k)


# n = int(input())

# ans = 0
# for i in range(1000):
#     if 2 ** i > n:
#         continue
#     else:
#         ans = i
# print(ans)