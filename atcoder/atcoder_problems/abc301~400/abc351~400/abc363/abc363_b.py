N, T, P = map(int, input().split())
L = list(map(int, input().split()))


for i in range(T):
    count = 0
    for j in range(N):
        if L[j] + i >= T:
            count += 1

    if count >= P:
        print(i)
        break


# N, T, P = map(int, input().split())
# L = list(map(int, input().split()))

# L.sort(reverse=True)
# ans = T - L[P-1]
# if ans <= 0:
#     print(0)
# else:
#     print(ans)