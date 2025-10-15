N = int(input())

logout = True
ans = 0

for _ in range(N):
    S = input()
    if logout and S == "private":
        ans += 1
    
    if S == "login":
        logout = False

    if S == "logout":
        logout = True


print(ans)