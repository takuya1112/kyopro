S = list(input())
K = int(input())


for i in range(len(S)):
    if S[i] == "a": continue
    t = 26 - (ord(S[i]) - ord("a"))
    if t <= K: 
        S[i] = "a"
        K -= t

S[-1] = chr(ord(S[-1]) + K % 26)
ans = "".join(S)
print(ans)

    
# mycode
# S = list(input())
# K = int(input())

# ans = []

# for s in S:
#     if s == "a": 
#         ans.append("a")
#         continue
#     if ord(s) + K > ord("z"):
#         K -= (ord("z")+1) - ord(s) 
#         ans.append("a")
#     else:
#         ans.append(s)

# ans[-1] = chr(ord(ans[-1]) + K % 26)
# ans = "".join(ans)
# print(ans)