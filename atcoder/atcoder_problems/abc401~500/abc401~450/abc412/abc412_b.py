S = input()
T = input()

res = True
for i in range(1, len(S)):
    if S[i].isupper():
        if S[i-1] not in T:
            res = False
if res:
    print("Yes")
else:
    print("No")



# S = input()
# T = input()

# ok = True
# for i in range(len(S)):
#     if i == 0 or i == 1: continue
#     if S[i].isupper():
#         if S[i-1] not in T:
#             ok = False

# if ok:
#     print("Yes")
# else:
#     print("No")
