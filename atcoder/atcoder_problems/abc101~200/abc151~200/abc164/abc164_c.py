N = int(input())
S = set()
for i in range(N):
    s = input()
    S.add(s)
print(len(S))


# N = int(input())
# S = set(input() for _ in range(N))
# print(len(S))


# N = int(input())
# S = [input() for _ in range(N)]
# S = set(S)
# print(len(S))