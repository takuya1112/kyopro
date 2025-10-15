t = int(input())

for _ in range(t):
    N = int(input())
    A = list(map(int, input().split()))

    
    A.append(-1)

    ans = 0
    count = 0
    for i in range(N):
        if A[i] == A[i+1]:
            count += 1
        elif A[i]+1 == A[i+1]:
            count += 1
            if count <= 2:
                ans += 1
                count = 0
        else:
            ans += 1
        
    print(ans)
