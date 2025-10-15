S = [input() for _ in range(8)]
S.reverse()

for i in range(8):
    for j in range(8):
        if S[i][j] == "*":
            s = chr(j + ord('a'))
            n = i+1
            print(f"{s}{n}")
            exit()