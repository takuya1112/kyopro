import math
N = int(input())
floor = int(math.floor(N / 1.08) * 1.08)
ceil = int(math.ceil(N / 1.08) * 1.08)


if floor  == N:
    print(math.floor(N / 1.08))
elif ceil  == N:
    print(math.ceil(N / 1.08))
else:
    print(":(")