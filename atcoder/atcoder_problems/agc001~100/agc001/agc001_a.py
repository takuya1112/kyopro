N = int(input())
L = list(map(int, input().split()))
L.sort()

ans = 0
for i in range(N):
    ans += L[2 * i]
print(ans)



# N = int(input())
# L = list(map(int, input().split()))
# L.sort()

# ans = 0
# for i in range(N*2):
#     if i % 2 == 1:
#         continue
#     ans += L[i]

# print(ans)