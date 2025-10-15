X, Y = map(int, input().split())

count = 0
num = X
while num <= Y:
    count += 1
    num *= 2


print(count)
