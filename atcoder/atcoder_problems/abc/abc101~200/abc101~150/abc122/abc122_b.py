S = input()


T = ["A", "C", "G", "T"]
ans = 0
N = len(S)

for i in range(N):
    for j in range(i, N):
        ok = True
        for k in range(i, j+1):
            if S[k] not in T:
                ok = False
        if ok:
            ans = max(ans, j - i + 1)

print(ans)



# S = input()

# ans = 0
# temp = 0
# for s in S:
#     if s == "A" or s == "C" or s == "G" or s == "T":
#         temp += 1
#     else:
#         ans = max(ans, temp)
#         temp = 0

# ans = max(ans, temp)
# print(ans)