N = int(input())
ans = ""

for i in range(N):
    c, l = input().split()
    l = int(l)
    for j in range(l):
        ans += c
        if len(ans) > 100:
            print("Too Long")
            exit()
print(ans)


# N = int(input())
# S = ""
# cnt = 0
# for i in range(N):
#     c, l = input().split()
#     l = int(l)
#     cnt += l
#     if cnt > 100:
#         print("Too Long")
#         exit()
#     S += c * l

# if len(S) <= 100:
#     print(S)
# else:
#     print("Too Long")
