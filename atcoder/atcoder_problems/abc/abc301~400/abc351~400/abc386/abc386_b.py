s = list(input())
ans = len(s)
for i in range(len(s)-1):
    if s[i] + s[i+1] == "00":
        ans -= 1
        s[i] = "x"
        s[i+1] = "x"
print(ans)


# S = input()
# count = 0
# i = 0
# s = ""
# while S != s:
#     if i < len(S) -1 and S[i] == "0" and S[i+1] == "0":
#         s += "00"
#         i += 2
#     else:
#         s += S[i]
#         i += 1
#     count += 1

# print(count)