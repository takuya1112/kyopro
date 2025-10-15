A, B, C = list(map(int, input().split()))

ans = 0
while A % 2 == 0 and B % 2 == 0 and C % 2 == 0:
    a = A // 2
    b = B // 2
    c = C // 2

    A = b + c
    B = a + c
    C = a + b
    if A == B == C:
        ans -= 1
        break
    ans += 1

print(ans)