N = int(input())
A = [int(input())-1 for _ in range(N)]

ans = 0
cur = 0
seen = [False] * N

while cur != 1:
    seen[cur] = True
    cur = A[cur]
    ans += 1

    if seen[cur]:
        print(-1)
        exit()

print(ans)


# N = int(input())
# A = [int(input()) for _ in range(N)]

# check = A[0]
# count = 1
# for i in range(N):
#     if check == 2:
#         print(count)
#         exit()
#     check = A[check-1]
#     count += 1

# print(-1)