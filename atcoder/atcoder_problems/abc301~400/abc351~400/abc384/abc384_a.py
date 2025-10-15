N, c1, c2 = map(str, input().split())
N = int(N)
S = input()
t = ""

for i in range(N):
    if S[i] == c1:
        t += c1
    else:
        t += c2

print(t)


# N, c1, c2 = input().split()
# S = list(input())

# N = int(N)
# for i in range(N):
#     if S[i] != c1:
#         S[i] = c2

# S = "".join(S)
# print(S)