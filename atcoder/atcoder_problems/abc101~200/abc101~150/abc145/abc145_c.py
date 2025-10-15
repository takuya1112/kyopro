import math

N = int(input())
X = []
Y = []
for i in range(N):
    x,y = map(int, input().split())
    X.append(x)
    Y.append(y)

def dist(i, j):
    dx = X[i] - X[j]
    dy = Y[i] - Y[j]
    return math.sqrt(dx*dx + dy*dy)

len = 0
for i in range(N):
    for j in range(i):
        len += dist(i,j)

num = 2
for i in range(N-1, 0, -1):
    num *= i

fact = 1
for i in range(N, 0, -1):
    fact *= i
ans = (len * num) / fact

print("%.10f" %ans)





# import math
# import itertools

# N = int(input())
# X = []
# Y = []
# for i in range(N):
#     x,y = map(int, input().split())
#     X.append(x)
#     Y.append(y)

# def dist(i, j):
#     dx = X[i] - X[j]
#     dy = Y[i] - Y[j]
#     return math.sqrt(dx*dx + dy*dy)


# order = list(range(N))
# perms =itertools.permutations(order)

# len = 0
# cnt = 0

# for p in perms:
#     for i in range(N-1):
#         len += dist(p[i], p[i+1])
#     cnt += 1

# ans = len/cnt
# print("%.10f" %ans)





# import math
# import itertools

# N = int(input())
# X = [list(map(int, input().split()) )for _ in range(N)]

# order = list(range(N))
# perms = itertools.permutations(order)

# ans = []
# for p in perms:
#     result = 0
#     for i in range(len(p)-1):
#         x1 = X[p[i]][0]
#         y1 = X[p[i]][1]
#         x2 = X[p[i+1]][0]
#         y2 = X[p[i+1]][1]
#         result += math.sqrt(((x1- x2) ** 2) + (y1 - y2) ** 2)

#     ans.append(result)


# print(sum(ans)/len(ans))
