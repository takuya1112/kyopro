N = int(input())
blue_cards = {}
red_cards = {}

for _ in range(N):
    s = input()
    if s not in blue_cards:
        blue_cards[s] = 1
        red_cards[s] = 0
    else:
        blue_cards[s] += 1

M = int(input())

for _ in range(M):
    t = input()
    if t not in red_cards:
        red_cards[t] = 1
    else:
        red_cards[t] += 1

ans = 0
for s in blue_cards:
    b_num = blue_cards[s]
    r_num = red_cards[s]
    if b_num - r_num > ans:
        ans = b_num - r_num


print(ans)
