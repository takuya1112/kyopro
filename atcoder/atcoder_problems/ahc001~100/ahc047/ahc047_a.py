N, M, L = map(int, input().split())

alphabet = ["a", "b", "c", "d", "e", "f"]
M_dic = {}
M_count_dic = {s : [0] * 6 for s in alphabet}

for i in range(N):
    S, P = input().split()
    P = int(P)
    M_dic[S] = P
    for j in range(len(S)-1):
        if S[j+1] == "a":
            M_count_dic[S[j]][0] += 1
        elif S[j+1] == "b":
            M_count_dic[S[j]][1] += 1
        elif S[j+1] == "c":
            M_count_dic[S[j]][2] += 1
        elif S[j+1] == "d":
            M_count_dic[S[j]][3] += 1
        elif S[j+1] == "e":
            M_count_dic[S[j]][4] += 1
        elif S[j+1] == "f":
            M_count_dic[S[j]][5] += 1



biggest = ""
biggest_n = 0

for s in M_dic:
    if M_dic[s] > biggest_n:
        biggest = s
        biggest_n = M_dic[s]



count = 0
for i in range(len(biggest)):
    print(biggest[i], end=" ")
    persent_list = [0] * M

    persentage = M_count_dic[biggest[i]]


    for j in range(len(biggest)):
        if i+1 != j:
            if biggest[j] == "a" and sum(persent_list) <= 75 and 100 - sum(persent_list) > persentage[0]:
                persent_list[j] = persentage[0]
            elif biggest[j] == "b" and sum(persent_list) <= 75 and 100 - sum(persent_list) > persentage[1]:
                persent_list[j] = persentage[1]
            elif biggest[j] == "c" and sum(persent_list) <= 75 and 100 - sum(persent_list) > persentage[2]:
                persent_list[j] = persentage[2]
            elif biggest[j] == "d" and sum(persent_list) <= 75 and 100 - sum(persent_list) > persentage[3]:
                persent_list[j] = persentage[3]
            elif biggest[j] == "e" and sum(persent_list) <= 75 and 100 - sum(persent_list) > persentage[4]:
                persent_list[j] = persentage[4]
            elif biggest[j] == "f" and sum(persent_list) <= 75 and 100 - sum(persent_list) > persentage[5]:
                persent_list[j] = persentage[5]
    
    if i < M-1:
        persent_list[i+1] = 100 - sum(persent_list)
    else:
        for k in range(len(biggest)):
            persent_list[0] += (100 - sum(persent_list))
    


    for j in range(M):
        print(persent_list[j], end=" ")
    print()
    count += 1


if count < M:
    while count < M:
        print(alphabet[3], end=" ")
        for i in range(4):
            print(25, end=" ")
        for i in range(8):
            print(0, end=" ")
        count += 1
print()
