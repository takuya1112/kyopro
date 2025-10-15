N, Q = map(int, input().split())
A = list(range(1, N+1))

offset = 0
for qi in range(Q):
    query = list(map(int, input().split()))
    t = query[0]
    if t == 1:
        p, x = query[1], query[2]
        p -= 1
        A[(offset+p) % N] = x
    if t == 2:
        p = query[1]
        p -= 1 
        print(A[(offset+p) % N])

    if t == 3:
        k = query[1]
        offset = (offset + k)%N



# N, Q = map(int, input().split())
# queries = [list(map(int, input().split())) for _ in range(Q)]

# A = list(range(1, N+1))
# K = 0
# for q in queries:
#     i = q[0]
#     if i == 1:
#         A[(q[1]-1 + K) % N] = q[2]
#     elif i == 2:
#         print(A[(q[1]-1 + K) % N])
#     elif i == 3:
#         k = q[1] % N
#         K += k