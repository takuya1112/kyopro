a, b = list(map(str, input().split()))
X = int(a + b)

ans = False

for i in range(400):
    if i ** 2 == X:
        ans = True
        break
    
    else:
        continue

if ans:
    print("Yes")
else:
    print("No")
