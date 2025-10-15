from collections import deque
Q = int(input())
que = deque()
for _ in range(Q):
    query = list(map(int, input().split()))
    t = query[0]
    if t == 1:
        c, x = query[1], query[2]
        que.append([c, x])
    else:
        k = query[1]
        ans = 0
        while len(que) and que[0][0] <= k:
            ans += que[0][0] * que[0][1]
            k -= que[0][0]
            que.popleft()
        if k != 0:
            que[0][0] -= k
            ans += k * que[0][1]
        print(ans)



# from collections import deque
# Q = int(input())
# A = deque()
# for _ in range(Q):
#     query = list(map(int, input().split()))
#     if query[0] == 1:
#         c = query[1]
#         x = query[2]
#         A.append([c, x])
#     else:
#         k = query[1]
#         cnt = 0
#         while k > 0 and len(A) > 0:
#             c, x = A[0]
#             if k >= c:
#                 k -= c
#                 cnt += c * x
#                 A.popleft()
#             else:
#                 cnt += x * k 
#                 A[0][0] -= k
#                 k = 0

#         print(cnt)