N = int(input())

ans = 0

def dfs(n, use):
    global ans

    if n > N:
        return
    
    if use == 0b111:
        ans += 1

    dfs(10*n+3, use | 0b100)
    dfs(10*n+5, use | 0b010)
    dfs(10*n+7, use | 0b001)

dfs(0, 0b000)
print(ans)




# import sys
# sys.setrecursionlimit(100000000)

# N = int(input())

# num = ["3","5","7"]
# ans = 0

# def dfs(i):
#     global ans
#     if  357 <= int(i) <= N and "3" in i and "5" in i and "7" in i:
#         ans += 1
    
#     for j in range(3):
#         if int(i + num[j]) <= N:
#             dfs(i + num[j])
    



# for i in range(3):
#     dfs(num[i])

# print(ans)