A = list(map(int, input().split()))
order = list(range(1,6))

can = False
for i in range(4):
    A[i], A[i+1] = A[i+1], A[i]
    if A == order:
        print("Yes")
        exit()
    A[i], A[i+1] = A[i+1], A[i]
    
print("No")