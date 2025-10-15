from math import isqrt

N = int(input())
ans = 0
for a in range(1, 61):
    ans += (isqrt(N // (2**a)) + 1) // 2
    print((isqrt(N // (2**a)) + 1) // 2)
print(ans)



# N = int(input())

# nums = []

# ans = 0
# n = 1
# num = 1
# con = True

# while con:
#     num *= 2

#     if num >= 2 * n ** 2:
#         ans += 1
#         n += 1
#         nums.append(num)


#     if num < N and num not in nums:
#         ans += 1
#         nums.append(num)
    

#     if num >= N:
#         con = False
#         break


# print(ans)