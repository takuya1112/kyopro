S = input()
S_len = len(S)

ans = 0
for i in range(S_len):
    if S[i] == "A":
        for j in range(i,S_len):
            if S[j] == "B":
                for k in range(j,S_len):
                    if S[k] == "C":
                        if j - i == k - j:
                            ans += 1


print(ans)