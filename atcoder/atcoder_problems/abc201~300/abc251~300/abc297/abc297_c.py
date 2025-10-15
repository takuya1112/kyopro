H, W = map(int, input().split())

for i in range(H):
    S = list(input())
    for j in range(W-1):
        if S[j] == "T" and S[j+1] == "T":
            S[j] = "P"
            S[j+1] = "C"

    S = "".join(S)
    print(S)


# H, W = map(int, input().split())
# S = [list(input()) for _ in range(H)]

# for i in range(H):
#     for j in range(W-1):
#         if S[i][j] == "T" and S[i][j+1] == "T":
#             S[i][j] = "P"
#             S[i][j+1] = "C"

# for i in range(H):
#     S[i] = "".join(S[i])
#     print(S[i])