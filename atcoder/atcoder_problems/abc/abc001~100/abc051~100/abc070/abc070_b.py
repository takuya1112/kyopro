A, B, C, D = map(int, input().split())
lower = max(A, C)
upper = min(B, D)

print(max(0, upper- lower))

# A, B, C, D = map(int, input().split())


# ans = B - A
# if C > A:
#     ans -= C - A
# if B > D:
#     ans -= B - D
# if ans >= 0:
#     print(ans)
# else:
#     print(0)
