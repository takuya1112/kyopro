N, M = map(int, input().split())
L = []
FL = []
check = False

for i in range(N):
    row = []
    L.append(list(map(int, input().split())))
    for j in range(L[i][1]):
        row.append(L[i][j + 2])
    FL.append(row)

# print(L)
# print(FL)

for i in range(N):
    P1 = L[i][0]
    for j in range(N):
        P2 = L[j][0]
        if P1 >= P2:
            check2 = True
            for fi in FL[i]:
                if fi  not in FL[j]:
                    check2 = False
            if check2:
                if P1 > P2 or len(FL[j]) > len(FL[i]):
                    check = True
            

if check:
    print("Yes")
else:
    print("No")