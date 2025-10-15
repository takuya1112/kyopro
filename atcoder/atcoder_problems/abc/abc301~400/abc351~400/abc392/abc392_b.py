n, m = map(int, input().split())
a = set(map(int, input().split()))

ans = []
for i in range(1, n+1):
    exist = False
    for na in a:
        if na == i: exist = True
    if not exist:
        ans.append(i)

print(len(ans))
for x in ans: print(x, end=" ")
print()

# n, m = map(int, input().split())
# a = set(map(int, input().split()))
# ans = []
# for i in range(1, n+1):
#     if i not in a:
#         ans.append(i)

# print(len(ans))
# for a in ans:
#     print(a, end=" ")
# print()
