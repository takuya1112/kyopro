# https://atcoder.jp/contests/abc394/tasks/abc394_c
# TLE
# S = list(input())
# SL = len(S) -1

# for i in range(SL):
#     if S[i] + S[i + 1] == "WA":
#         S[i] = "A"
#         S[i + 1] = "C"
#         if S[i -1] + S[i] == "WA":
#             for j in range(i + 1,0,-1):
#                 if S[j -1] + S[j] == "WA":
#                     S[j -1] = "A"
#                     S[j] = "C"
#                 else:
#                     continue

# print("".join(S))


S = list(input())
SL = len(S)

i = 0
while i < SL - 1:
    if S[i] == "W" and S[i + 1] == "A":
        S[i] = "A"
        S[i + 1] = "C"
        i = max(0, i - 1)
        
    else:
        i += 1

print("".join(S))