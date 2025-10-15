N = int(input())
S = input()

ans = 0
x = 1

for i in range(N):
    if S[i] == "L":
        x = max(x-1, 1)

    elif S[i] == "R":
        x = min(x+1, 3)

    if x == 3:
        ans += 1

print(ans)


# N  = int(input())
# S = input()

# ans = 0
# box = [False] * 3
# box[0] = True

# for i in range(N):
#     move = S[i]
#     for j in range(3):
#         if box[j]:
#             if move == "L" and j > 0:
#                box[j] = False
#                box[j-1] = True
#                break
#             elif move == "R" and j < 2:
#                box[j] = False
#                box[j+1] = True
#                break
            

#     if box[2]:
#         ans += 1
#     print(box)

# print(ans) 