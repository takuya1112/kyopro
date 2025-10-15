N, M = map(int, input().split())
A = list(map(int, input().split()))
S = sum(A)

item_list = []

for i in range(N):
    item_list.append(False)

for i in range(N):
    if S / (4 * M) <= A[i]:
        item_list[i] = True

if item_list.count(True) >= M:
    print("Yes")
else:
    print("No")

