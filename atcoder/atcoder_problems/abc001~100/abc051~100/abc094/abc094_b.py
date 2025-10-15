N, M, X = map(int, input().split())
A = list(map(int, input().split()))

left = 0
right = 0

for a in A:
    if a < X:
        left += 1
    else:
        right += 1

print(min(left, right))




# N, M, X = map(int, input().split())
# A = list(map(int, input().split()))

# check = [False] * (N+1)
# for a in A:
#     check[a] = True

# ans = 0
# ans = min(check[1:X].count(True), check[X:N].count(True))
# print(ans)
