N = int(input())
X = [[] for _ in range(N)]
for i in range(N):
    a, b = list(map(int, input().split()))
    a -= 1
    X[a].append(b)

cnt = [0] * 101
ans = 0
for d in range(N):
    for b in X[d]:
        cnt[b] += 1

    for b in range(100, 0, -1):
        if cnt[b] > 0:
            ans += b
            cnt[b] -= 1
            break
    print(ans)



#mycode wrong
# N = int(input())
# A = []
# B = []

# for _ in range(N):
#     a, b = map(int, input().split())
#     A.append(a)
#     B.append(b)

# ans_list = [[] for _ in range(N)]
# for i in range(N):
#     a = A[i]
#     a -= 1
#     b = B[i]
#     ans_list[a].append(b)

# ans = 0
# can_add = []
# for i in range(N):
#     can_add += ans_list[i]
#     n = max(can_add)
#     ans += n
#     can_add.remove(n)
#     print(ans)


