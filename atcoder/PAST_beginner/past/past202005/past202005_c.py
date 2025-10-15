large = 10 ** 9

def solve(A, R, N):
    if R == 1:
        return A
    

    for _ in range(N-1):
     
        A *= R
        if A > large:
            return "large"
    
    return A

A, R, N = map(int, input().split())

ans = solve(A, R, N)
print(ans)




#TLE
# A, R, N = map(int, input().split())
# ans = A * (R ** (N-1))

# if ans > 10 ** 9:
#     print("large")
# else:
#     print(ans)


# A, R, N = map(int, input().split())
# large = 10 ** 9

# ans = A
# for i in range(N-1):
#     ans *= R
#     if ans > large:
#         print("large")
#         exit()

# print(ans)