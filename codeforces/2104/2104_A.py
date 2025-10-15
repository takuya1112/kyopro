t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())
    d = a + b + c
    if d % 3 == 0 and (d / 3) >= b:
        print("YES")
    else:
        print("NO")