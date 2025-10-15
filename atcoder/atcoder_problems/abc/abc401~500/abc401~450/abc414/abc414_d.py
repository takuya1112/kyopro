N, M = map(int, input().split())
X = list(map(int, input().split()))
X.sort()

d = []
for i in range(N-1):
    d.append(X[i+1] - X[i])
d.sort()

d = d[:N - M]
print(sum(d))


#mycode worng ans
# N, M = map(int, input().split())
# X = list(map(int, input().split()))
# X.sort()

# for i in range(N):
