N = int(input())
arr = []
for i in range(N):
    a, b = map(int, input().split())
    arr.append([a+b, a, b])

arr.sort(reverse=True)

ans = 0
for i in range(N):
    c, a, b = arr[i]
    if i % 2 == 0:
        ans += a
    else:
        ans -= b

print(ans)

#wrong ans
# N = int(input())
# ans_list = []
# for i in range(N):
#     a, b = map(int, input().split())
#     c = a - b
#     ans_list.append([c, a, b])
# ans_list.sort()

# T = 0
# A = 0
# for i in range(len(ans_list)):
#     if i % 2 == 0:
#         T += ans_list[i][1]
#     else:
#         A += ans_list[i][2]

# print(T - A)