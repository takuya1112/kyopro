N = int(input())


water = 0
time = 0
for i in range(N):
    T, V = map(int, input().split())
    if time != 0:
        water = max(0, water - (T - time))

    water += V
    time = T

print(water)