N = int(input())
S = [list(input()) for _ in range(N)]
T = [list(input()) for _ in range(N)]


def rot(a):
    res = [["."] * N for _ in range(N)]
    for i in range(N):
        for j in range(N):
            res[j][N-1-i] = a[i][j]
    print(res)
    return res

def normalize(a):
    li, lj = N, N
    for i in range(N):
        for j in range(N):
            if a[i][j] == "#":
                li = min(li, i)
                lj = min(lj, j)
    
    res = [["."] * N for _ in range(N)]
    for i in range(N):
        for j in range(N):
            if a[i][j] == "#":
                res[i-li][j-lj] = "#"

    return res


def same(a, b):
    return normalize(a) == normalize(b)


for i in range(4):
    if same(S, T):
        print("Yes")
        exit()
    
    T = rot(T)

print("No")


#??
# N = int(input())
# S = [input() for _ in range(N)]
# T = [input() for _ in range(N)]


# can = False
# for i in range(4):
#     col_move = True
#     row_move = True
#     for j in range(N):
#         if S[0][i] == "#":
#             row_move = False
#         if S[i][0] == "#":
#             col_move = False

#     if row_move:
#         s = S.pop(0)
#         S.append(s)

#     S = ["".join(row) for row in zip(*S[::-1])]

#     print(S)

