N, S = map(int, input().split())
T = [0] +  list(map(int, input().split()))


for i in range(N + 1):
    if T[i] - T[i - 1] > S:
        print("No")
        exit()

print("Yes")



# N, S = map(int, input().split())
# T = list(map(int, input().split()))

# ok = True
# if T[0] >= S + 0.5:
#     ok = False
# for i in range(1, N):
#     if T[i] - T[i-1] >= S + 0.5:
#         ok = False

# if ok:
#     print("Yes")
# else:
#     print("No")
