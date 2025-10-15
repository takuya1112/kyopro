n = int(input())
s = [''] * n
t = [''] * n
for i in range(n):
    s[i], t[i] = map(str, input().split())

for i in range(n):
    for j in range(i+1, n):
        if s[i] == s[j] and t[i] == t[j]:
            print("Yes")
            exit()
print("No")



# n = int(input())
# name = [input() for _ in range(n)]

# for i in range(n):
#     for j in range(n):
#         if i == j: continue
#         if name[i] == name[j]:
#             print("Yes")
#             exit()

# print("No")