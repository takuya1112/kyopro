# N, Q = map(int, input().split())
# A = list(map(int,  input().split()))

# cur = [0] * (N + 2)
# ans = 0
# for a in A:
#     cur[a] ^= 1
#     if cur[a-1] == cur[a+1] == True:
#         if cur[a]: ans -=1
#         else: ans += 1
#     elif cur[a-1] == cur[a+1] == False:
#         if cur[a]: ans += 1
#         else: ans -= 1
    
#     print(ans)




N, Q = map(int, input().split())
A = list(map(int,  input().split()))
a = [0] * (N + 1)
s = 0

for i in range(Q):
    x = A[i]
    print(x)
    print(a)
    s += (1 - a[x-1]) - a[x-1]
    s += (1 - a[x]) - a[x]
    a[x-1] = 1 - a[x-1]
    print(a)
    a[x] = 1 - a[x]
    print(a)
    print(s//2)



#mycode
# N, Q = map(int, input().split())
# A = list(map(int,  input().split()))

# count = 0
# grid = [0] * N

# for i in range(Q):
#     a = A[i] -1
#     if grid[a]: 
#         grid[a] = 0
#         if 0 < a and grid[a-1] and a < N -2 and grid[a+1]:
#             count += 2
#         if 0 < a and not grid[a-1] and a < N -2 and not grid[a+1]:
#             count -= 1
#         if a == 0 and not grid[a+1]:
#             count -= 1
#         if a == N -1 and not grid[a-1]:
#             count -= 1
        
#     else: 
#         grid[a] = 1
#         if 0 < a and not grid[a-1] and a < N -2 and not grid[a+1]:
#             count += 1
#         if a == 0 and not grid[a+1]:
#             count += 1
#         if a == N -1 and not grid[a-1]:
#             count += 1


#     print(count)