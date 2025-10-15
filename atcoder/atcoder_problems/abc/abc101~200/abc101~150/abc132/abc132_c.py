N = int(input())
D = list(map(int, input().split()))
D.sort()

middle = N//2

print(D[middle] - D[middle-1])
