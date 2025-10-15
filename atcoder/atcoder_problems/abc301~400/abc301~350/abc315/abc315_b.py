M = int(input())
D = list(map(int, input().split()))

middle = (sum(D) + 1) // 2

for i in range(M):
    if middle <= D[i]:
        print(i+1, middle)
        exit()
    else:
        middle -= D[i]


# M = int(input())
# D = list(map(int, input().split()))

# middle = (sum(D) + 1) // 2

# total = 0
# for i in range(M):
#     total += D[i]
#     if total >= middle:
#         print(i+1, end=" ")
#         print(middle - sum(D[:i]))
#         break