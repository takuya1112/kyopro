def solve():
    N = int(input())
    S = input()
    l = -1
    for i in range(N-1):
        if S[i] > S[i+1]:
            l = i
            break

    if l == -1:
        print(S)
        return
    
    r = N
    for j in range(l+1, N):
        if S[l] < S[j]:
            r = j
            break

    ans = S[:l] + S[l + 1: r] + S[l] + S[r:]
    print(ans)
    

T = int(input())
            
for _ in range(T):
    solve()


#TLE ans
# T = int(input())
# for _ in range(T):
#     N = int(input())
#     S = list(input())
#     ans = ""
#     for i in range(N-1):
#         if S[i] > S[i+1]:
#             for j in range(i, N):
#                 s = S[:i]
#                 s += S[i+1:j+1]
#                 s.append(S[i])
#                 s += S[j+1:]
#                 s = "".join(s)
#                 if ans == "":
#                     ans = s
#                 elif ans > s:
#                     ans = s

#     if ans == "":
#         S = "".join(S)
#         ans = S
#     print(ans)