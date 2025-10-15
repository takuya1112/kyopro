S = input()
same = True
step = True
for i in range(3):
    if S[i] != S[i+1]:
        same = False
    a = int(S[i])
    b = int(S[i+1])
    if (a + 1) % 10 != b:
        step = False

if same or step:
    print("Weak")
else:
    print("Strong")





# X = input()
# first = False
# for i in range(3):
#     if X[i] != X[i+1]:
#         first = True


# second = False
# for i in range(3):
#     if int(X[i]) + 1 != int(X[i+1]): 
#         if int(X[i]) == 9 and int(X[i+1]) == 0:
#             continue
#         else:
#             second = True

    

# if first and second:
#     print("Strong")
# else:
#     print("Weak")