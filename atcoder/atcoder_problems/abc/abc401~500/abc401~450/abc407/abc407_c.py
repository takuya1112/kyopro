S = list(input())

ans = 0
x = 0

while len(S) != 0:
    while True:
        d = int(S[-1])
        if (d - x) % 10 == 0:
            break
        
        ans += 1
        x += 1
    S.pop()
    ans += 1


print(ans)



#wrong ans
# S = input()

# ans = 0
# for i in range(len(S)-1):
#     n = int(S[i])
#     m = int(S[i+1])
#     if n == 0 or n < m:
#         ans += n + 10 - m
#     else:
#         ans += n - m

# ans += int(S[-1])
# ans += len(S)
# print(ans)