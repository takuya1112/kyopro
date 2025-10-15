N, Q = map(int, input().split())

graph = [[False] * N for _ in range(N)]


for i in range(Q):
    query = list(map(int, input().split()))
    n = query[0]
    x = query[1] -1
    if n == 1:
        y = query[2] -1
        graph[x][y] = True
    
    elif n == 2:
        for j in range(N):
            if graph[j][x]:
                graph[x][j] = True

    else:
        follow_list = []
        for j in range(N):
            if graph[x][j]:
                for k in range(N):
                    if graph[j][k] and k != x:
                        follow_list.append(k)

        for j in follow_list:
            graph[x][j] = True




for i in range(N):
    for j in range(N):
        if graph[i][j]:
            print("Y", end="")
        else:
            print("N", end="")
    print()