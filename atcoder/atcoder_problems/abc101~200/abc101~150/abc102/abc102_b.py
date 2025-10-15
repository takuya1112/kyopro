N = int(input())
A = list(map(int, input().split()))

max_int = max(A)
min_int = min(A)
print(max_int - min_int)