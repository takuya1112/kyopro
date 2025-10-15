from collections import deque
from string import ascii_lowercase

Q = int(input())
que = deque()

for q in range(Q):
    values = input().split()
    if values[0] == "1":
        c = values[1]
        x = int(values[2])
        que.append([c, x])
    else:
        d = int(values[1])
        cnt = {c:0 for c in ascii_lowercase}
        while d > 0 and len(que) > 0:
            c, x = que[0]
            if d >= x:
                d -= x
                cnt[c] += x
                que.popleft()
            else:
                cnt[c] += d
                que[0][1] -= d
                d = 0
        ans = 0
        for c in ascii_lowercase:
            ans += cnt[c] ** 2
        print(ans)

#mycode worng ans
# from collections import deque
# Q = int(input())

# S = deque()
# for i in range(Q):
#     query = input().split()
#     n = int(query[0])
#     if n == 1:
#         c, x = query[1], int(query[2])
#         for j in range(x):
#             S.append(c)
#     else:
#         ans = 0
#         cnt = 0
#         d = int(query[1])
#         check = set()
#         for j in range(d):
#             if len(S) == 0: break
#             a = S.popleft()
#             if a not in check:
#                 ans += cnt ** 2
#                 cnt = 0
#                 check.add(a)
        
#             cnt += 1
#         ans += cnt ** 2
#         print(ans)
