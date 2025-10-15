import sys
sys.setrecursionlimit(1010100)

N = int(input())
child = [[] for _ in range(N)]

for i in range(1, N):
    b = int(input())
    child[b-1].append(i)


def dfs(i):
    if len(child[i]) == 0:
        return 1
    else:
        values = []
        for j in child[i]:
            values.append(dfs(j))
        return max(values) + min(values) + 1
    
print(dfs(0))





# N = int(input())
# B = [int(input()) for _ in range(N-1)]
# boss = [[] for _ in range(N)]
# for i in range(N-1):
#     boss[B[i]-1].append(i+1)


# salary = [0] * N

# for i in range(N-1, -1, -1):
#     if boss[i] == []:
#         salary[i] = 1
#     else:
#         mx = 0
#         mn = float("INF")
#         for b in boss[i]:
#             mx = max(mx, salary[b])
#             mn = min(mn, salary[b])
        
#         salary[i] = mx + mn + 1



            

# print(salary[0])