A = []


while True:
    N = int(input())
    A.append(N)
    if N == 0:
        break


A.reverse()
for i in range(len(A)):
    print(A[i])




# ans_list = []


# con = True
# while con:
#     i = int(input())
#     if i == 0:
#         con = False
#     ans_list.append(i)

# for i in range(len(ans_list) -1, -1, -1):
#     print(ans_list[i])