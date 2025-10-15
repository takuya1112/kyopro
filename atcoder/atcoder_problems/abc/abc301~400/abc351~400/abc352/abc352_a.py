N, X, Y, Z = map(int, input().split())
NL = []
XYL = []

for i in range(N):
    NL.append(i+1)
# print(NL)

bigger = X
smaller = Y
if Y > X:
    bigger = Y
    smaller = X

for i in NL[smaller:bigger]:
    XYL.append(i)

if Z in XYL:
    print("Yes")
else:
    print("No")