a, b, x = map(int, input().split())
upper = b // x

if a == 0:
    print(upper + 1)
else:
    lower = (a - 1) // x
    print(upper - lower)
