def solve():
    N = int(input())
    A = list(map(int, input().split()))

    used = [0] * N
    ans = 1
    last = 0
    while True:
        if A[last] * 2 >= A[N-1]:
            ans += 1
            break
        nxt = -1
        for i in range(1, N):
            if used[i]:continue
            if A[last] * 2 >= A[i]:
                if nxt != -1 and A[nxt] >= A[i]: continue
                nxt = i
        if nxt == -1 or A[nxt] <= A[last]:
            print(-1)
            return
        
        ans += 1
        last = nxt
        used[nxt] = 1
    print(used)
    print(ans)


T = int(input())
for i in range(T):
    solve()

#mycode worng
# def solve():
#     N = int(input())
#     S = list(map(int, input().split()))
#     s = sorted(S[1:N-1])
#     used = []
#     used.append(S[0])
#     ans = 1
#     for i in range(N-2):
#         if 2 * used[-1] <= s[i]:
#             used.append(s[i-2])
#             ans += 1
#             if 2 * used[-1] >= S[-1]:
#                 print(ans+1)
#                 return
#     if len(s):
#         used.append(s[-1])
#     used.append(S[-1])
#     ans += 1
#     for i in range(len(used)-1):
#         if 2 * used[i] < used[i+1]:
#             print(-1)
#             return 
#     print(ans+1)


# T = int(input())
# for i in range(T):
#     solve()

