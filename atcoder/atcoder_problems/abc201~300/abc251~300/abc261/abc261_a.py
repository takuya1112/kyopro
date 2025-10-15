l1, r1, l2, r2 = map(int, input().split())
l = max(l1, l2)
r = min(r1, r2)
if l <= r: print(r-l)
else: print(0)


# l1, r1, l2, r2 = map(int, input().split())
# count = [0] * 110
# for l in range(l1, r1):
#     count[l] += 1

# for r in range(l2, r2):
#     count[r] += 1

# ans = 0
# for c in count:
#     if c == 2:
#         ans += 1
# print(ans)
