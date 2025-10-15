H, W, si, sj = map(int, input().split())
si -= 1
sj -= 1

S = [list(input()) for _ in range(H)]
T = input()

ans = 0
for c in T:
    ni, nj = si, sj
    if c == "U": ni -= 1
    if c == "D": ni += 1
    if c == "L": nj -= 1
    if c == "R": nj += 1
    if S[ni][nj] == "#": continue
    si, sj = ni, nj
    if S[si][sj] == "@":
        S[si][sj] = "."
        ans += 1


print(si+1, sj+1, ans)
    



# H, W, Y, X = map(int, input().split())
# S = [input() for _ in range(H)]
# T = input()
# visited = [[False] * W for _ in range(H)] 

# y = Y -1
# x = X -1
# count = 0
# if S[y][x] == "@":
#     visited[y][x] = True
#     count += 1
# for i in range(len(T)):
#     t = T[i]
#     if t == "U" and S[y-1][x] != "#":
#         y -= 1

#     elif t == "D" and S[y+1][x] != "#":
#         y += 1

#     elif t == "L" and S[y][x-1] != "#":
#         x -= 1
    
#     elif t == "R" and S[y][x+1] != "#":
#         x += 1

#     if S[y][x] == "@" and not visited[y][x]:
#         visited[y][x] = True
#         count += 1 

# print(y+1 , x+1, count)