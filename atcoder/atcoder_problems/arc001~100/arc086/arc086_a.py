N, K = map(int, input().split())
A = list(map(int, input().split()))

A_count_list = [0 for _ in range(200001)]

for i in range(N):
    A_count_list[A[i] - 1] += 1

A_count_list.sort(reverse=True)

ans = 0
for i in range(K,200001):
    if A_count_list[i] == 0:
        break
    ans += A_count_list[i]


print(ans)


# N, K = map(int, input().split())
# A = list(map(int, input().split()))

# ball = [0] * N

# for i in range(N):
#     ball[A[i]-1] += 1

# ball.sort(reverse=True)
# ans = sum(ball[K:])
# print(ans)