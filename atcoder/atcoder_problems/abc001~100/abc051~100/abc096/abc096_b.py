A, B, C = map(int, input().split())
K = int(input())

print(A + B + C + max(A,B,C) * ((1 << K) -1))



# A_B_C = list(map(int, input().split()))
# K = int(input())

# for i in range(K):
#     mx = 0
#     n = 0
#     for j in range(3):
#         if A_B_C[j] * 2 > mx:
#             mx = A_B_C[j] * 2
#             n = j

#     A_B_C[n] = mx

# print(sum(A_B_C))