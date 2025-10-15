N, K = map(int, input().split())
i = N%K
print(min(i, K-i))
