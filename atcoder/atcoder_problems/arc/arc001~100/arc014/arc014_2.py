N = int(input())
used = set()

check = False
pre = input()
used.add(pre)
for i in range(1, N):
    w = input()

    if w[0] != pre[-1]: check = True
    if w in used: check = True
    used.add(w)
    pre = w

    if check:
        if i % 2 == 0:
            print("LOSE")
        else:
            print("WIN")
        exit()

print("DRAW")
