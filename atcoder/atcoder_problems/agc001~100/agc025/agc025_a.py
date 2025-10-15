N = int(input())
ans = 10000000
for i in range(1,N//2 + 1):
    saved_ans = 0
    a = i
    b = N -i
    while(a > 0):
        saved_ans += a % 10
        a //= 10
    
    while(b > 0):
        saved_ans += b % 10
        b //= 10

    ans = min(saved_ans, ans)

print(ans)