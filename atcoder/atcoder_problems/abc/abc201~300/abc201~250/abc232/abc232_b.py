S = input()
T = input()


s = list(S)
for k in range(1,27):
    for i in range(len(S)):
        if s[i] == 'z':
            s[i] = chr(ord(s[i]) - 25)
        else:
            s[i] = chr(ord(s[i]) + 1)

    if "".join(s) == T:
        print("Yes")
        exit()

print("No")
    
# S = list(input())
# T = list(input())

# if S == T:
#     print("Yes")
#     exit()


# for i in range(25):
#     for j in range(len(S)):
#         c = ord(S[j]) +1
#         if c > ord("z"):
#             c -= 26
#         S[j] = chr(c)


#     if S == T:
#         print("Yes")
#         exit()
# print("No")