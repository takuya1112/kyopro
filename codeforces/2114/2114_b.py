import math
t = int(input())
for i in range(t):
    N, K = map(int, input().split())
    S = input()
    count = [0] * 2
    for i in range(N):
        count[int(S[i])] += 1

    K_min = abs(count[0] - count[1]) // 2
    K_max = math.floor(count[0] // 2 ) + math.floor(count[1] / 2)
    
    if K_min > K or K > K_max:
        print("No")
    else:
        if (K - K_min) % 2 == 0:
            print("Yes")
        else:
            print("No")