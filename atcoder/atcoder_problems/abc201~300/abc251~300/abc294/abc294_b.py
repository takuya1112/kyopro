H, W = map(int, input().split())

for i in range(H):
    A = list(map(int, input().split()))
    for j in range(W):
        if A[j] == 0:
            print(".", end="")
        else:
            print(chr(A[j] + ord("A") -1), end="")
    print()