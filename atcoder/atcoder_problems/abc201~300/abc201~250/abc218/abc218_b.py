p = list(map(int, input().split()))
for i in range(len(p)):
    j = p[i]-1
    print(chr(ord("a") + j), end="")
print()