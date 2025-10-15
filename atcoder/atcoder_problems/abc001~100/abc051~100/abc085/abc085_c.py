N, Y = map(int, input().split())

Y //= 1000


for y in range(Y // 5 + 1):
    for x in range(Y // 10 + 1):
        z = Y - ((10 * x) + (5 * y))

        if x + y + z == N and z >= 0:
            print(x, y, z)
            exit()
        
print("-1 -1 -1")