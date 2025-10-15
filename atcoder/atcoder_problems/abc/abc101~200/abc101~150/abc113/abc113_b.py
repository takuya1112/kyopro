N = int(input())
T, A = map(int, input().split())
H = list(map(int, input().split()))
H_list = []

for i in range(N):
    H_list.append(T - (H[i] * 0.006))

ans = 0
ans_temp = abs(A - H_list[0])


for i in range(1, N):
    if ans_temp > abs(A - H_list[i]):
        ans = i
        ans_temp = abs(A - H_list[i])

print(ans + 1)
print(H_list)