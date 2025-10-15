N, Q = map(int, input().split())

card = [0] * N

for _ in range(Q):
    c, x = map(int, input().split())
    x -= 1
    if c == 1:
        card[x] += 1
    elif c == 2:
        card[x] += 2
    else:
        if card[x] >= 2:
            print("Yes")
        else:
            print("No")