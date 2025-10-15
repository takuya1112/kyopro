S = input()
T = input().lower()

def isSubarray(x):
    xi = 0
    for c in S:
        if x[xi] == c: xi += 1
        if xi == len(x): return True
    return False

if isSubarray(T):
    print("Yes")
    exit()
if T[-1] == "x":
    T = T[:-1]
    if isSubarray(T):
        print("Yes")
        exit()
print("No")


#mycode
# S = input()
# T = input().lower()
# S += "x"

# ti = 0
# for c in S:
#     if c == T[ti]:
#         ti += 1
#     if len(T) == ti:
#         print("Yes")
#         exit()

# print("No")




# S = input()
# T = input().lower()
# S += "x"

# first = []
# second = []
# third = []

# for i in range(len(S)):
#     s = S[i]
#     if s == T[0]:
#         first.append(i)

#     if s == T[1]:
#         second.append(i)

#     if s == T[2]:
#         third.append(i)


# f = -1
# s = -1
# t = -1
# if len(first):
#     f = first[0]

# for i in range(len(second)):
#     if second[i] > f:
#         s = second[i]
#         break

# for i in range(len(third)):
#     if third[i] > s:
#         t = third[i]
#         break

# if 0 <= f and 0 <= s and 0 <= t:
#     print("Yes")
# else:
#     print("No")
