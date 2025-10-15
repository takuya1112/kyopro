S = input()
x, y = S.split(".")

y = int(y)
print(x, end="")
if 0 <= y <= 2: print("-")
if 7 <= y <= 9: print("+")


# X = float(input())
# x = int(X)
# y = int(str(X - x)[2])
# if 0 <= y <= 2:
#     print(f"{x}-")
# elif 3 <= y <= 6:
#     print(x)
# else:
#     print(f"{x}+")