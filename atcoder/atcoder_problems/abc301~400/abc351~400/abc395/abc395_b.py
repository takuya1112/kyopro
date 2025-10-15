N = int(input())
grid = [["?"] * N for i in range(N)] 



for i in range(N):
    j = N - i - 1
    if i <= j:
        for x in range(i, j + 1):
            for y in range(i, j + 1):
                if i % 2 == 0:
                    grid[x][y] = "#"
                else:
                    grid[x][y] = "."
        

for g in grid:
    print("".join(g))