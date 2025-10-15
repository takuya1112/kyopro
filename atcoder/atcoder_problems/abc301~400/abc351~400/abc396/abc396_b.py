Q = int(input())
st = [0] * 100

for qi in range(Q):
    query = list(map(int, input().split()))
    if query[0] == 1:
        st.append(query[1])
    else:
        ans = st[-1]
        st.pop()
        print(ans)




# from collections import deque
# Q = int(input())
# queries = [list(map(int, input().split())) for _ in range(Q)]

# d = deque()
# for _ in range(100):
#     d.append(0)

# for i in range(Q):
#     now = queries[i]
#     n = now[0]
#     if n == 1:
#         d.append(now[1])
#     else:
#         x = d.pop()
#         print(x)