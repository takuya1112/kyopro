N = int(input())
W = [list(map(int, input().split())) for _ in range(N)]
D = [list(map(int, input().split())) for _ in range(N)]
T = 0
Turn = 2 * (N ** 3)
INF = 10 ** 10
loaded = []


exsist = [[True] * N for _ in range(N)]
exsist[0][0] = False


def findHevy():#耐久のあるやつとちかいやを取ってみる
    idx = [0, 0]
    durable = -INF
    for i in range(N):
        for j in range(N):
            if exsist[i][j]:
                if D[i][j] > durable:
                    durable = D[i][j]
                    idx = [i, j]
    if idx == [0, 0]:
        exit()
    return idx


def findClose():
    idx = [0, 0]
    close = INF
    for i in range(N):
        for j in range(N):
            if exsist[i][j]:
                if i + j < close:
                    idx = [i, j]
                    close = i + j
    if idx == [0, 0]:
        exit()
    return idx


def progress(now):
    i, j = now
    w = loaded[1][0]
    loaded[0][1] -= w
    # print(loaded)
    if loaded[0][1] <= 0 and not exsist[i][j]:
        print(2)
        plusT()
        exsist[i][j] = True
        loaded[0][1] += w
        W[i][j] = loaded[0]
        D[i][j] = loaded[1]
        loaded[1] = [0, 0]


def go(i, j):
    for _ in range(j):
        print("R")
        plusT()

    for _ in range(i):
        print("D")
        plusT()

    print(1)
    plusT()
    exsist[i][j] = False
    loaded.append([W[i][j], D[i][j]])


def get(i, j, i2, j2):
    for _ in range(j-j2):
        print("L")
        plusT()
    
    for _ in range(i- i2):
        print("U")
        plusT()
    print(1)
    plusT()
    exsist[i2][j2] = False
    loaded.append([W[i2][j2], D[i2][j2]])




def back(i, j):
    global loaded
    now = [i, j]
    for n in range(j):
        progress(now)
        print("L")
        plusT()
        now[1] -= 1

    for n in range(i):
        progress(now)
        print("U")
        plusT()
        now[0] -= 1

    loaded = []



def plusT():
    global T
    T += 1
    if T >= Turn:
        exit()



while T < Turn:
    i, j = findHevy()
    i2, j2 = findClose()
    go(i, j)
    if i >= i2 and j >= j2 and [i, j] != [i2, j2]:
        get(i, j, i2, j2)
        back(i2, j2)
    else:
        loaded.append([0,0])
        back(i, j)
