R, X = map(int, input().split())

if X == 1:
    if 1600 <= R < 3000:
        print("Yes")
    else:
        print("No")
elif X == 2:
    if 1200 <= R < 2400:
        print("Yes")
    else:
        print("No") 