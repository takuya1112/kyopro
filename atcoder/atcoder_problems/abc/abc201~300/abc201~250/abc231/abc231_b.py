N = int(input())
S_dic = {}
for i in range(N):
    S = input()
    if S not in S_dic:
        S_dic[S] = 1
    else:
        S_dic[S] += 1

name = ""
count = 0
for s in S_dic:
    if S_dic[s] > count:
        name = s
        count = S_dic[s]

print(name)