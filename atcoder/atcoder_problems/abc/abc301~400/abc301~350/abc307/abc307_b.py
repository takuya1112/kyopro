N = int(input())
S = [input() for _ in range(N)]
ans = "No"

for i in range(N):
    for j in range(N):
        if i != j:
            t = S[i] + S[j]
            flag = True
            for k in range(len(t)):
                if t[k] != t[-k-1]:
                    flag = False
                
            if flag:
                ans = "Yes"

print(ans)




# import math
# N = int(input())
# S = [input() for _ in range(N)]


# def check(S):
#     N = len(S)
#     for i in range(math.ceil(N / 2)):
#         if S[i] != S[N - 1 -i]:
#             return False
#     return True


# ok = False
# for i in range(N-1):
#     for j in range(i+1, N):
#         Si = S[i] + S[j]
#         Sj = S[j] + S[i]

#         if check(Si):
#             ok = True
#         if check(Sj):
#             ok = True

# if ok:
#     print("Yes")
# else:
#     print("No")





# N = int(input())
# S = []
# T_or_F = []

# for i in range(N):
#     S.append(input())

# for i in range(N):
#     Si = S[i]
#     for j in range(N):
#         Sj = S[j]
#         if Si != Sj:
#             Sij = Si + Sj
#             M = len(Sij)
#             HM = round(M/2)
#             check = True
#             for i in range(HM):
#                 # print(Sij)
#                 if Sij[i] == Sij[M -1 - i]:
#                     continue
#                 else:
#                     check = False
            
#             if check:
#                 T_or_F.append(True)
                
# if True in T_or_F:
#     print("Yes")
# else:
#     print("No")