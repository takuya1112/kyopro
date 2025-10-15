N = int(input())
S = input()
E = [0] * N
W = [0] * N

for i in range(N):
    if S[i] == "E": E[i] = 1
    else: W[i] = 1

for i in range(1,N):
    W[i] += W[i-1]
    E[i] += E[i-1]

ans = N
for i in range(N):
    sm = 0
    if i : sm += W[i-1]
    sm += E[N-1] - E[i]
    ans = min(ans, sm)

print(ans)


# N = int(input())
# S = input()

# min_turn = N + 100
# sum_W = [0]
# for i in range(N):
#     if S[i] == "W":
#         sum_W.append(sum_W[i] + 1)
#     else:
#         sum_W.append(sum_W[i])


# for i in range(N):
#     w = sum_W[i]
#     e = (N  -(1 + i)) - (sum_W[N] - sum_W[i + 1])

#     turn = w + e

#     min_turn = min(min_turn, turn)


# print(min_turn)


# N = int(input())
# S = input()

# W = [0] * (N+1)
# E = [0] * (N+1)

# for i in range(N):
#     if S[i] == "W":
#         W[i+1] += W[i] + 1
#         E[i+1] = E[i]
#     else:
#         W[i+1] = W[i]
#         E[i+1] += E[i] + 1

# ans = N + 1
# for i in range(1, N+1):
#     s = 0
#     s += W[i-1]
#     s += E[-1] - E[i]
#     ans = min(ans, s)

# print(ans)



# N = int(input())
# S = input()
# W, E = 0, 0
# for i in range(N):
#     if S[i] == "W":
#         W += 1
#     else:
#         E += 1

# ans = [0] * N
# if S[0] == "W":
#     ans[0] = E
# else:
#     ans[0] = E - 1

# plus = 0
# if S[0] == "W":
#     plus += 1

# for i in range(1,N):
#     if S[i] == "E":
#         ans[i] = ans[i-1] -1 + plus
    
#     elif S[i] == "W":
#         ans[i] = ans[i-1] + plus
#         plus += 1


# print(ans)
# print(min(ans))