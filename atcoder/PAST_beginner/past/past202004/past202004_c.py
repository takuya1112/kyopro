N = int(input())
S = [list(input()) for _ in range(N)]

for i in range(N-2, -1, -1):
    for j in range(1, 2 * N - 2):
        if S[i][j] == "#":
            if S[i + 1][j - 1] == "X":
                S[i][j] = "X"
            if S[i + 1][j] == "X":
                S[i][j] = "X"
            if S[i + 1][j + 1] == "X":
                S[i][j] = "X"

for s in S:
    print("".join(s))





# N = int(input())
# S = [list(input()) for _ in range(N)]


# for i in range(N-1,0,-1):
#     for j in range(2 * N - 1):
#         if S[i][j] == "X":
#             if S[i-1][j] != ".":
#                 S[i-1][j] = "X"

#             if j - 1 >= 0 and S[i-1][j-1] != ".":
#                 S[i-1][j-1] = "X"

#             if j + 1 <= 2 * N - 2 and S[i-1][j+1] != ".":
#                 S[i-1][j+1] = "X"

# for s in S:
#     print("".join(s))


        
