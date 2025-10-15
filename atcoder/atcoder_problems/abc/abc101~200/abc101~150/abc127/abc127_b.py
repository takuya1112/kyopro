R, D, X = map(int, input().split())

x = X
for i in range(10):
    x = R * x - D
    print(x) 