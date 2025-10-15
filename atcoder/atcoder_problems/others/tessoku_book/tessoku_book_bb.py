Q = int(input())
queries = [input().split() for _ in range(Q)]

Map = {}
for q in queries:
    if q[0] == "1":
        Map[q[1]] = q[2]
    if q[0] == "2":
        print(Map[q[1]])
 

# Q = int(input())
# scores = {}
# for _ in range(Q):
#     query = input().split()
#     i = int(query[0])
#     if i == 1:
#         name = query[1]
#         score = query[2] 
#         scores[name] = score
#     else:
#         print(scores[query[1]])