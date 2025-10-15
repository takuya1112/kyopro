N = int(input())

ans = 0
while N&1 == 0:
    ans += 1
    
    N >>= 1
    print(N)


print(ans)




#  N = int(input())

# binary = ""
# while N > 0:
#     binary += str(N % 2)
#     N //= 2

# count = 0
# for i in binary:
#     if i == "0":
#         count += 1
#     else:
#         break
# print(count)