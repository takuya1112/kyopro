a, b = list(map(int, input().split()))

ab = ""
for i in range(b):
    ab += str(a)

ba = ""
for i in range(a):
    ba += str(b)

print(min(ab,ba))



# a, b = list(map(int, input().split()))

# smaller = 0
# bigger = 0
# if a > b:
#     smaller = str(b)
#     bigger = a
# else:
#     smaller = str(a)
#     bigger = b

# ans = ""

# for i in range(bigger):
#     ans += smaller

# print(ans)