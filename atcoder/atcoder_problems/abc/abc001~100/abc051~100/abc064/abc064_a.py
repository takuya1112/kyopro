r, g, b = map(str, input().split())
check = int(r + g + b)
if check % 4 == 0:
    print("YES")
else:
    print("NO")