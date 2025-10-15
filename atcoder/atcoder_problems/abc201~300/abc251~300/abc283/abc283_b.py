N = int(input())
A = list(map(int, input().split()))
Q = int(input())


for i in range(Q):
    query = list(map(int, input().split()))
    n = query[0]
    k = query[1] -1

    if n == 1:
        x = query[2]
        A[k] = x

    elif n == 2:
        print(A[k])