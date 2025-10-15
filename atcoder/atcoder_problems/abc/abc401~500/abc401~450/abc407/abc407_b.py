X, Y = map(int, input().split())
dice = list(range(1,7))

correct = 0

for i in dice:
    for j in dice:
        if i + j >= X:
            correct += 1
        elif abs(i - j) >= Y:
            correct += 1

print(correct/36)