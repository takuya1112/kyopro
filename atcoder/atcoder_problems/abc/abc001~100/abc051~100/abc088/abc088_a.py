N = int(input())
A = int(input())

check = N % 500
if check > A:
    print("No")
else:
    print("Yes")