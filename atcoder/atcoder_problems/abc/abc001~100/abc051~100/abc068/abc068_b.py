N = int(input())

ans = -1
num = -1

for i in range(1, N+1):
    count = 0
    y = i

    while y % 2 == 0:
        y /= 2
        count += 1
    
    if count > num:
        num = count
        ans = i

print(ans)



# N = int(input())
# two_list = [2 ** i for i in range(7)]

# for i in range(len(two_list)):
#     if two_list[i] > N:
#         print(two_list[i-1])
#         break
#     if N >= two_list[-1]:
#         print(two_list[-1])
#         break