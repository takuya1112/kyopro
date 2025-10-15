N = int(input())

z = 0

for i in range(1, 555555 + 1):
    si = str(i)

    ok = True

    for s in si:
        if s != si[0]:
            ok = False
            
    
    if ok:
        z += 1

    if ok and z == N:
        ans = i

print(ans)


# import math

# N = int(input())

# x = math.ceil(N / 9)
# y = N % 9

# if y == 0:
#     y = 9

# ans = ""

# for _ in range(0, x):
#     ans += str(y)

# print(ans)


# N = int(input())

# count = 0
# i = 0
# while count != N:
#     i += 1

#     check_list = []
#     s1 = str(i)[0]
#     for s in str(i):
#         if s != s1:
#             check_list.append(False)
#         else:
#             check_list.append(True)
#     if False not in check_list:
#         count += 1

# print(i)


    