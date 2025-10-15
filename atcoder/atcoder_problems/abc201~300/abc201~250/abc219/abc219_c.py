X = input()
N = int(input())
S = [input() for _ in range(N)]

f = {X[i] : chr(i + ord("a")) for i in range(26)}
g = {chr(i + ord("a")) : X[i] for i in range(26)}


for i in range(N):
    s = list(S[i])
    for j in range(len(s)):
        s[j] = f[s[j]]
    S[i] = "".join(s)

S.sort()

for i in range(N):
    s = list(S[i])
    for j in range(len(s)):
        s[j] = g[s[j]]
    S[i] = "".join(s)

for i in range(N):
    print(S[i])

    
#??
# X = input()
# N = int(input())
# alphabet_dic = {chr(a):[] for a in range(ord("a"), ord("z")+1)}

# for _ in range(N):
#     S = input()
#     alphabet_dic[S[0]].append(S)

# print(alphabet_dic)