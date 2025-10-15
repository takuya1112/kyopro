import sys
sys.setrecursionlimit(10000000)
all = []

def dfs(d, val):
    global all
    all.append(val)

    if d == 10:
        return
    
    for j in range(-1,2):
        add = (val % 10) + j
        if  0 <= add and add <= 9:
            dfs(d+1, val*10 + add)

K = int(input())
for i in range(1,10):
    dfs(1,i)

all.sort()

print(all[K-1])    


# from collections import deque

# K = int(input())
# Q = deque(i for i in range(1,10))

# for i in range(K-1):
#     s = Q.popleft()
#     for j in range(-1, 2):
#         add = (s % 10) + j
#         if 0 <= add and add <= 9:
#             Q.append(s * 10 + add)

# print(Q[0])



# from collections import deque

# K = int(input())


# ans = []
# Q = deque(i for i in range(1,10))


# while len(ans) < K:
#     i = Q.popleft()
#     ans.append(i)
#     first = int(str(i)[-1])
#     if first != 0:
#         Q.append(i*10 + (first-1))
#     Q.append(i*10 + first)
#     if first != 9:
#         Q.append(i*10 + (first+1))

# print(ans[-1])