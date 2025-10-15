A, B, K = map(int, input().split())

div_list = []
for i in range(1,max(A,B)+1):
    if A % i == 0 and B % i == 0:
        div_list.append(i)


print(div_list[-K])