N, M, Q = map(int, input().split())
can_view = [set() for _ in range(N)]
can_view_all = [False]* N
print(can_view)

for _ in range(Q):
    t, *q = map(int, input().split())
    x = q[0] - 1
    if t == 1:
        y = q[1] - 1
        can_view[x].add(y)

    elif t == 2:
        can_view_all[x] = True
    
    else:
        y = q[1] - 1
        if can_view_all[x] or y in can_view[x]:
            print("Yes")
        else:
            print("No")



# N, M, Q = map(int, input().split())

# people_dic = {i: [] for i in range(N)}
# ok_list = [False] * N

# for _ in range(Q):
#     query = list(map(int, input().split()))
#     X = query[1] - 1
#     if query[0] == 1:
#         Y = query[2] -1
#         people_dic[X].append(Y)
        
    
#     elif query[0] == 2:
#         ok_list[X] = True
    
#     else:
#         Y = query[2] - 1
#         if ok_list[X] or Y in people_dic[X]:
#             print("Yes")
#         else:
#             print("No")


    