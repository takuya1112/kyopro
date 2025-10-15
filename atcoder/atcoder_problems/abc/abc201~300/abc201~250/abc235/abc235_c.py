from collections import defaultdict

N, Q = map(int, input().split())
A = list(map(int, input().split()))

A_dic = defaultdict(list)
for i in range(N):
    A_dic[A[i]].append(i + 1)


for i in range(Q):
    x, k = map(int, input().split())
    if x in A_dic and len(A_dic[x]) + 1 > k:
        print(A_dic[x][k-1])
    else:
        print(-1)

            