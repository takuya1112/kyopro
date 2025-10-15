A, B = map(str, input().split())
sa = 0
sb = 0

for i in range(3):
    sa += int(A[i])
    sb += int(B[i])

if sa > sb:
    print(sa)
else:
    print(sb)