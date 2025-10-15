N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

pasta_dic = {}
for i in range(N):
    if A[i] not in pasta_dic: pasta_dic[A[i]] = 1
    else: pasta_dic[A[i]] += 1


ok = True
for i in range(M):
    if B[i] not in pasta_dic or pasta_dic[B[i]] <= 0:
        print("No")
        exit()

    pasta_dic[B[i]] -= 1

print("Yes")