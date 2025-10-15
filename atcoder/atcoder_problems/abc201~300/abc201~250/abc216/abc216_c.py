N = int(input())

ans = ""
while N:
    if N & 1:
        ans += "A"
        N -= 1
    else:
        ans += "B"
        N //= 2 

ans = "".join(reversed(ans))
print(ans)



# N = int(input())

# ball = 0

# ball += 1
# print("A", end="")

# while True:
#     if ball * 2 <= N:
#         ball *= 2
#         print("B", end="")
#     else:
#         ball += 1
#         print("A", end="")

#     if ball == N:
#         break

# print()

