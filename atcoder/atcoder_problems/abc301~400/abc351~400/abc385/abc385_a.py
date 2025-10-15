a, b, c = map(int, input().split())
if a == b == c or a + b == c or a + c == b or c + b == a:
    print("Yes")
else:
    print("No")


a, b, c = map(int, input().split())
if a + b == c or b + c == a or a + c == b:
    print("Yes")
    exit()
elif a == b and a == c:
    print("Yes")
    exit()
print("No")