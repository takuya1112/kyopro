def solve():
    a = list(map(int, input().split()))
    a.sort()
    if a[0] == a[3]: return False
    if a[0] == a[1] and a[0] == a[2]: return True
    if a[0] == a[1] and a[2] == a[3]: return True
    if a[1] == a[2] and a[2] == a[3]: return True
    return False

if solve(): print("Yes")
else: print("No")

# card = list(map(int, input().split()))
# card = set(card)
# if len(card) == 2:
#     print("Yes")
# else:
#     print("No")