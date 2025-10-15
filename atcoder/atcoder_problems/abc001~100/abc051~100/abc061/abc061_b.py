N, M = map(int, input().split())
A_B_roads = [0 for _ in range(N)]

for _ in range(M):
    a, b = map(int, input().split())
    A_B_roads[a - 1] += 1
    A_B_roads[b - 1] += 1

for i in range(N):
    print(A_B_roads[i])