import itertools

N = int(input())
P = tuple(map(int, input().split()))
Q = tuple(map(int, input().split()))

order = list(range(1,N+1))
perms = itertools.permutations(order)


order_dic = {}
for p in perms:
    order_dic[p] = len(order_dic)


print(abs(order_dic[P] - order_dic[Q]))



# import itertools

# N = int(input())
# P = list(map(int, input().split()))
# Q = list(map(int, input().split()))

# order = list(range(1,N+1))
# perms = itertools.permutations(order)

# num_p = 0
# num_q = 0

# count = 1
# for p in perms:
#     p = list(p)
#     if p == P:
#         num_p = count
#     if p == Q:
#         num_q = count

#     count += 1

# print(abs(num_p - num_q))
