R, B = map(int, input().split())
x, y = map(int, input().split())

def check(X):
    r = R-X
    b = B-X
    if r < 0 or b < 0:
        return False
    num = r // (x-1) + b // (y-1)
    return (num >= X)

ok = 0
ng = 10 ** 18 + 1
while abs(ok-ng) > 1:
    mid = (ok+ng) // 2
    if check(mid):
        ok = mid
    else:
        ng = mid

print(ok)




#mycode wrong ans
# ans = 0
# l, r = 0, R

# while r - l > 1:
#     mid = (r + l) // 2
#     l2, r2 = 0, B
#     while r2 - l2 > 1:
#         mid2 = (r2 + l2) // 2
#         print(mid, mid2)
#         if x * mid + mid2 <= R and y * mid2 + mid <= B:
#             if ans < mid + mid2:
#                 ans = mid + mid2
#                 l = mid
#                 l2 = mid2
#         else:
#             r = mid
#             r2 = mid2
#         print(l,r)
        
# print(ans)


# ans = 0
# for i in range(R):
#     for j in range(B):
#         if x * i + j <= R and y * j + i <= B:
#             ans = max(ans, i+j)
# print(ans)