n, m = map(int, input().split())

taro = [False] * n

for _ in range(m):
    a, b = input().split()
    a = int(a) -1
    if b == "F" or taro[a]:
        print("No")
    else:
        taro[a] = True
        print("Yes")



# N, M = map(int, input().split())

# taro = [0] * N

# for _ in range(M):
#     a, b = map(str, input().split())
#     a = int(a) - 1
#     if b == "M":
#         taro[a] += 1
    
#     if b == "M" and taro[a] == 1:
#         print("Yes")
#     else:
#         print("No")