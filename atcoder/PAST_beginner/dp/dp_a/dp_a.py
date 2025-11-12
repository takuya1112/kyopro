import sys
sys.setrecursionlimit(1000000)

N = int(input())
h = list(map(int, input().split()))

cost = [0] * N

done = [False] * N

def rec(i):
    if done[i]:
        return cost[i]
    
    if i == 0:
        cost[i] = 0

    elif i == 1:
        cost[i] = rec(0) + abs(h[0] - h[1])

    else:
        cost[i] = min(rec(i-1) + abs(h[i-1]-h[i]), rec(i-2) + abs(h[i-2]-h[i]))
    
    done[i] = True
    return cost[i]

print(rec(N-1))



# N = int(input())
# h = list(map(int, input().split()))

# cost = [0] * N

# cost[0] = 0

# cost[1] = cost[0] + abs(h[0] - h[1])

# for i in range(2, N):
#     cost[i] = min(cost[i-1] + abs(h[i-1]-h[i]), cost[i-2] + abs(h[i-2] - h[i]))

# print(cost[N-1])


# N = int(input())
# h = list(map(int, input().split()))

# ans = [0, abs(h[0] - h[1])]

# for i in range(2,N):
#     ans.append(min(ans[i-2] + abs(h[i-2] - h[i]), ans[i-1] + abs(h[i-1] - h[i])))

# print(ans[-1])