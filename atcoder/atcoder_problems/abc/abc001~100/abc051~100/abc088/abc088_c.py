c_list = [list(map(int, input().split())) for i in range(3)]
check_list = []

check = True
for i in range(2):
    column_list = []
    row_list = []
    for j in range(3):
            column_list.append(c_list[i][j] - c_list[i+1][j])
            row_list.append(c_list[j][i] - c_list[j][i+1])
    check_list.append(column_list)
    check_list.append(row_list)
            

for c in check_list:
    if c[0] != c[1] or c[1] != c[2]:
         check = False


if check:
    print("Yes")
else:
    print("No")


# c = [list(map(int, input().split())) for _ in range(3)]

# a1 = 0
# a_list = [0]
# b_list = []
# for i in range(3):
#     b_list.append(c[0][i] - a1)

# for i in range(1,3):
#     a_list.append(c[i][0] - b_list[0])


# info = True
# for i in range(3):
#     for j in range(3):
#         if c[i][j] != a_list[i] + b_list[j]:
#             info = False

# if info:
#     print("Yes")
# else:
#     print("No")