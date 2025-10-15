N = int(input())

prinme_num = []
for i in range(2,N+1):
    ok = True
    for j in range(2,i):
        if i % j == 0:
            ok = False
    
    if ok:
        prinme_num.append(i)

for i in range(len(prinme_num)):
    print(prinme_num[i], end=" ")
print()
