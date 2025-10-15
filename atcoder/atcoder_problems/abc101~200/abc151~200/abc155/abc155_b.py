N = int(input())
A = list(map(int, input().split()))

accept = True
for i in range(N):
    if A[i] % 2 == 1:
        continue
    else:
        if A[i] % 3 == 0 or A[i] % 5 == 0:
            continue
        else:
            accept = False

if accept:
    print("APPROVED")

else:
    print("DENIED")