N = int(input())
S = input()


ans = ""
for s in S:
    ans += chr(ord("A") + (ord(s) - ord("A") + N) % 26)
 
print(ans)



# N = int(input())
# S = input()


# ans = ""
# for i in range(len(S)):
#     n = ord(S[i]) + N
#     if n > ord("Z"):
#         n -= 26
#     ans += chr(n)

# print(ans)