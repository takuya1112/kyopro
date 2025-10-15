N = int(input())

ans = 0
for A in range(1, N):
    b_count = (N - 1) // A
    ans += b_count

print(ans)


# N = int(input())

# ans = 0
# for A in range(1,N):
#     for B in range(1,N):
#         if N <= A * B:
#             break

#         ans += 1

# print(ans)