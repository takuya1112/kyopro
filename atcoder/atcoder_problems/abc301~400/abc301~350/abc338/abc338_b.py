S = input()
ans = "a"
for i in range(ord("b"), ord("z") +1):
    c = chr(i)
    if S.count(c) > S.count(ans):
        ans = c

print(ans)


# S = input()
# S_dic = {}

# for s in S:
#     if s not in S_dic:
#         S_dic[s] = 1
#     else:
#         S_dic[s] += 1

# ans = ""
# con = 0
# for s in S_dic:
#     if S_dic[s] == con:
#         ans = min(ans, s)
#     elif S_dic[s] > con:
#         ans = s
#         con = S_dic[s]

# print(ans)