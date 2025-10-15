N = int(input())
A = list(map(int, input().split()))

for i in range(N+1):
    ok = True
    for a in A:
        if i == a:
            ok = False
    if ok:
        print(i)
        exit()




# N = int(input())
# A = list(map(int, input().split()))
# A.sort()

# for i in range(2001):
#     if i not in A:
#         print(i)
#         break