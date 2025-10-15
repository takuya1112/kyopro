n, k = map(int, input().split())
s = k
a = [1 for i in range(n + 1)]
for i in range(k, n + 1):
    a[i] = s
    s -= a[i-k]
    s += a[i]
    s %= 1000000000
print(a[n])





# N, K = list(map(int, input().split()))

# An_list = []

# n = 0
# while 0 <= n < K:
#     An_list.append(1)
#     n += 1


# if K <= N:
#     An_list.append(n)
#     an = An_list[-1]
#     m = 0
#     for i in range(K +1 , N + 1):
#         an *= 2
#         an = an - An_list[m]
#         An_list.append(an)
#         m += 1


# print(An_list[-1] % (10 ** 9))
