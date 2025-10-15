S = input()


for i in range(1,len(S)):
    if S[i] != S[0]:
        if i == 1:
            if S[i] == S[i + 1]:
                print(1)
                exit()

        print(i + 1)
        exit()





# S = list(input())

# for i in range(len(S)):
#     if S.count(S[i]) == 1:
#         print(i+1)