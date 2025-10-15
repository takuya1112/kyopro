N = int(input())
P = list(map(int, input().split()))
PR = [ [] for i in range(N)]


r = 1
con = True

while con:
    mp = 0
    x = max(P)
    mp = max(P)

    k = P.count(x) 
    for j in range(N):
        if mp == P[j]:
            PR[j] = r
            P[j] = 0
     
    r += k
    if [] not in PR:
        con = False


for i in range(N):
    print(PR[i])