N = int(input())
S = input()


ans = 0
for i in range(1000):
    t = ""
    x = i
    for j in range(3):
        t += str(x % 10)
        x //= 10
    
    ti  = 0
    for k in range(N):
        if S[k] == t[ti]:
            ti += 1
            if ti == 3:
                break
    if ti == 3:
        ans += 1

print(ans)


# N = int(input())
# S = input()

# passwords = set()

# for i in range(N):
#     for j in range(i + 1,N):
#         for k in range(j + 1,N):
#             passwords.add(S[i] + S[j] + S[k])


# print(len(passwords))
