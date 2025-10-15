N, M = map(int, input().split())
A = set(map(int, input().split()))
B = set(map(int, input().split()))
# print(A&B)
# print(A|B)
print(len(A&B) / len(A|B))


# NA, NB = map(int, input().split())
# A = set(map(int, input().split()))
# B = set(map(int, input().split()))

# both = 0
# for a in A:
#     if a in B:
#         both += 1

# AB = set()
# for a in A:
#     AB.add(a)

# for b in B:
#     AB.add(b)

# print(both/len(AB))