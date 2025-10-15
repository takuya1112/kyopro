A, B, X = map(int, input().split())

ok = 0
ng = 10 ** 9 + 1

while abs(ok-ng) > 1:
    mid = (ok + ng) // 2
    d = len(str(mid))
    price = A * mid + B * d
    if price <= X:
        ok = mid
    else:
        ng = mid

print(ok)




# A, B, X = map(int, input().split())

# ok = 0
# ng = X

# def length(x):
#     return len(str(x))

# while ng - ok > 1:
#     mid = (ok + ng) // 2
#     l = length(mid)
#     if (A * mid) + (B * l) <= X:
#         ok = mid
#     else:
#         ng = mid

# if ok >= 10 ** 9:
#     print(10 ** 9)
# else:
#     print(ok)