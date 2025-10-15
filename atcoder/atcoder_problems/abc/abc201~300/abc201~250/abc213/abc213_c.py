H, W, N = map(int, input().split())
A, B = [], []

for i in range(N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)



Adict = {a:i+1 for i, a in enumerate(sorted(set(A)))}
Bdict = {b:i+1 for i, b in enumerate(sorted(set(B)))}


for i in range(N):
    print(Adict[A[i]], Bdict[B[i]])

