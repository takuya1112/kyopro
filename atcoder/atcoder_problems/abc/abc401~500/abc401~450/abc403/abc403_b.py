T = input()
U = input()

indicate = [i for i in range(len(T)) if T[i] == "?"]
alpabets = [chr(ord("a") + i) for i in range(26)]

for a in alpabets:
    for b in alpabets:
        for c in alpabets:
            for d in alpabets:
                S = list(T)
                S[indicate[0]] = a
                S[indicate[1]] = b
                S[indicate[2]] = c
                S[indicate[3]] = d
                S = "".join(S)
                if U in S:
                    print("Yes")
                    exit()
print("No")

# T = input()
# U = input()

# for i in range(len(T) - len(U) + 1):
#     check = True
#     for j in range(len(U)):
#         if T[i + j] != U[j] and T[i + j] != "?":
#             check = False
#             break
#     if check:
#         print("Yes")
#         exit()

# print("No")





# T = input()
# U = input()

# check = False

# for i in range(len(T)):
#     if check:
#         break
#     if T[i] == U[0] or T[i] == "?":
#         for j in range(len(U)):
#             if len(U) > len(T[i:]):
#                 break
#             if T[i + j] == "?" or T[i + j] == U[j]:
#                 check = True
#             else:
#                 check = False
#                 break
                

            

# if check:
#     print("Yes")
# else:
#     print("No")
