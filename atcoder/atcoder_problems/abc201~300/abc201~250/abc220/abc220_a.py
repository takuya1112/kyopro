a, b, c = map(int, input().split())
ans = (a+c-1)//c * c
if ans <= b: print(ans)
else: print(-1)


# a, b, c = map(int, input().split())

# ans = 0
# while ans <= b:
#     if a <= ans <= b:
#         print(ans)
#         exit()
#     ans += c
# print(-1)