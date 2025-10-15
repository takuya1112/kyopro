n, m = list(map(int, input().split()))

menu_list = [[] for _ in range(n)]
count = [[] for _ in range(m)]

ans = 0

for i in range(m):
    food_list = list(map(int, input().split()))
    count[i] = food_list[0]
    for a in food_list[1:]:
        menu_list[a - 1].append(i)

B = list(map(int, input().split()))

for b in B:
    for i in menu_list[b -1]:
        count[i] -= 1
        if count[i] == 0:
            ans += 1
    print(ans)


# N, M = list(map(int, input().split()))
# ans = 0
# dish_list = []

# for i in range(M):
#     dish_list.append(list(map(int, input().split())))

# dish_list.sort()
# food_list = list(map(int, input().split()))

# print(dish_list[1][0])
# count = 0
# ok_list = []
# for i in range(N):
#     count += 1
#     ok_food = food_list[i]
#     ok_list.append(ok_food)
#     ok_list.sort()
#     m = 0
#     while True:
#         if M == m or dish_list[m][0] >= count :
#             break
#         for j in range(1, dish_list[m][0]):
#             if dish_list[m][j] in ok_list:
#                 ans += 1
#                 del dish_list[m]
#         m += 1


#     print(ans)

