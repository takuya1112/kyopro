N = int(input())
Q = int(input())

row_num = list(range(0, N))
col_num = list(range(0, N))

trans_flag = False

for q in range(Q):
    query = list(map(int, input().split()))
    t = query[0]
    if t != 3:
        A, B = query[1:3]
        A -= 1
        B -= 1
    
    if t == 1:
        row_num[A], row_num[B] = row_num[B], row_num[A]

    elif t == 2:
        col_num[A], col_num[B] = col_num[B], col_num[A]

    elif t == 3:
        row_num, col_num = col_num, row_num
        trans_flag = not trans_flag
    
    else:
        if trans_flag:
            print(col_num[B] * N + row_num[A])
        else:
            print(row_num[A] * N + col_num[B])


#mycode worng ans
# N = int(input())
# Q = int(input())

# grid = [[0] * N for _ in range(N)]
# for i in range(1, N+1):
#     for j in range(1, N+1):
#         grid[i-1][j-1] = N * (i-1) + j -1


# cnt = 0
# for i in range(Q):
#     query = input().split()
#     if query[0] == "1":
#         A, B = int(query[1]), int(query[2])
#         A -= 1
#         B -= 1
#         if cnt % 2 == 0:
#             grid[A], grid[B] = grid[B], grid[A]
#         else:
#             for i in range(N):
#                 grid[A][i], grid[B][i] = grid[B][i], grid[A][i]
#         print(grid)

#     elif query[0] == "2":
#         A, B = int(query[1]), int(query[2])
#         A -= 1
#         B -= 1
#         if cnt % 2 == 0:
#             grid[A], grid[B] = grid[B], grid[A]
#         else:
#             for i in range(N):
#                 grid[A][i], grid[B][i] = grid[B][i], grid[A][i]
#         print(grid)
#     elif query[0] == "3":
#         cnt += 1
#     else:
#         A, B = int(query[1]), int(query[2])
#         A -= 1
#         B -= 1
#         if cnt % 2 == 0:
#             print(grid[A][B])
#         else:
#             print(grid[B][A])