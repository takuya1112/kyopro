from collections import deque

Q = int(input())
queries = [input().split() for _ in range(Q)]

S = deque()
for q in queries:
    if q[0] == "1":
        S.append(q[1])
    if q[0] == "2":
        print(S[-1])
    if q[0] == "3":
        S.pop()



# Q = int(input())

# stack = []
# for i in range(Q):
#     query = input().split()
#     if query[0] == "1":
#         stack.append(query[1])
#     elif query[0] == "2":
#         print(stack[-1])
#     else:
#         name = stack.pop(-1)
    