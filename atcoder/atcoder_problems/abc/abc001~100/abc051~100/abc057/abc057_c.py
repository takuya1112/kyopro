import math
N = int(input())

ans = 100000
for a in range(1, int(math.sqrt(N)) + 1):
    b = N // a
    if N % a == 0:
        check = max(len(str(a)), len(str(b)))
        ans = min(ans, check)
print(ans)