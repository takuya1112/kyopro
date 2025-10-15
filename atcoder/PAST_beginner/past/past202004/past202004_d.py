def is_math(T,S):
    for i in range(0, len(S) - len(T) +1):
        ok = True
        for j in range(0, len(T)):
            if S[i+j] != T[j] and T[j] != ".":
                ok = False
        if ok:
            return True
    return False



S = input()
C = "abcdefghijklmnopqrstuvwxyz."

M = []


for T in C:
    if is_math(T,S):
        M.append(T)


for c1 in C:
    for c2 in C:
        T = c1 + c2
        if is_math(T,S):
            M.append(T)

for c1 in C:
    for c2 in C:
        for c3 in C:
            T = c1 + c2 + c3
            if is_math(T,S):
                M.append(T)

print(len(M))


# S = input()
# characters = list("abcdefghijklmnopqrstuvwxyz.")

# s_len = len(S)

# ans = 0
# for a in characters:
#     for s in S:
#         if s == a or a == '.':
#             ans += 1
#             break


# for a in characters:
#     for b in characters:
#         for i in range(s_len-1):
#             if S[i] + S[i+1] == a + b:
#                 ans += 1
#                 break

#             elif a == '.' or b == '.':
#                 if a == S[i] or b == S[i+1] or a + b == '..':
#                     ans += 1
#                     break


# for a in characters:
#     for b in characters:
#         for c in characters:
#             for i in range(s_len-2):
#                 if S[i] + S[i+1] + S[i+2] == a + b + c:
#                     ans += 1
#                     break
#                 elif a == '.' or b == '.' or c == '.':
#                     if a + b + c == '...':
#                         ans += 1
#                         break
#                     elif a == '.' and b == '.' or b == '.' and c == '.' or a == '.' and c == '.':
#                         if a == S[i] or b == S[i+1] or c == S[i+2]:
#                             ans += 1
#                             break
#                     elif a == S[i] and b == S[i+1]:
#                         ans += 1
#                         break
#                     elif a == S[i] and c == S[i+2]:
#                         ans += 1
#                         break
#                     elif b == S[i+1] and c == S[i+2]:
#                         ans += 1
#                         break


# print(ans)