S = input()
flag = [True] * 10

for i in range(9):
    flag[int(S[i])] = False

for i in range(10):
    if flag[i]:
        print(i) 

# S = input()

# for i in range(10):
#     if str(i) not in S:
#         print(i)