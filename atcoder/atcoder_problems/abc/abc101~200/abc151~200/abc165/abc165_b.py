X = int(input())

x = 100
count = 0
while x < X:
    x += x // 100
    count += 1

print(count)
