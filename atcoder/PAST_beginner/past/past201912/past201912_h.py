N = int(input())
C = list(map(int, input().split()))
Q = int(input())

sell = 0

odd_sell = 0
all_sell = 0

odd_small = 10 ** 12
even_small = 10 ** 12


for i in range(N):
    if i % 2 == 0:
        odd_small = min(odd_small, C[i])
    else:
        even_small = min(even_small, C[i])


for _ in range(Q):
    query = list(map(int, input().split()))
    n = query[0]

    if n == 1:
        x = query[1] -1
        a = query[2]

        if x % 2 == 0:
            m = C[x] - odd_sell - all_sell

        else:
            m = C[x] - all_sell

        if m >= a:
            C[x] -= a
            sell += a
            if x % 2 == 0:
                odd_small = min(odd_small, C[x])
            else:
                even_small = min(even_small, C[x])


    elif n == 2:
        a = query[1]
        m = odd_small - odd_sell - all_sell

        if m >= a:
            odd_sell += a
    
    elif n == 3:
        a = query[1]
        if min(odd_small - odd_sell - all_sell, even_small - all_sell) >= a:
            all_sell += a


# print(sell)
# print(odd_sell)
# print(all_sell)

total = sell + odd_sell * ((N + 1) // 2) + N * all_sell
print(total)



# N = int(input())
# C = list(map(int, input().split()))
# Q = int(input())

# one_sell = 0

# odd_sell = 0
# all_sell = 0

# odd_small = C[0]
# smallest = min(C)

# for i in range(N):
#     if i % 2 == 0:
#         odd_small = min(odd_small, C[i])

# for _ in range(Q):
#     query = list(map(int, input().split()))
#     n = query[0]
#     if n == 1:
#         x = query[1]-1
#         a = query[2]

#         m = C[x] - all_sell
#         if x % 2 == 0:
#             m -= odd_sell

#         if m >= a:
#             C[x] -= a
#             one_sell += a
#             smallest = min(smallest, C[x])
#             if x % 2 == 0:
#                 odd_small = min(odd_small, C[x])
    
#     elif n == 2:
#         a = query[1]
#         m = odd_small - a
#         if m >= 0:
#             odd_sell += a
#             odd_small = min(m, odd_small)
#             smallest = min(m, smallest)


#     elif n == 3:
#         a = query[1]
#         m = smallest - a
#         if m >= 0:
#             all_sell += a
#             if odd_small == smallest:
#                 odd_small = min(m, odd_sell)
#                 smallest = min(m, smallest)
#             else:
#                 smallest = min(m, smallest)



# total = one_sell + odd_sell * ((N+1)//2) + all_sell * N
# print(total)