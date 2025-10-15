S = input()
cnt = {}
for c in S:
    if c not in cnt:
        cnt[c] = 0 
    cnt[c] += 1

cnt2 = {}
for c in cnt:
    if cnt[c] not in cnt2:
        cnt2[cnt[c]] = 0
    cnt2[cnt[c]] += 1

for c in cnt2:
    if cnt2[c] != 2:
        print("No")
        exit()

print("Yes")



# S = input()
# count = [0] * len(S)
# s_set = set(S)

# for s in s_set:
#     c = 0
#     for t in S:
#         if s == t:
#             c += 1
#     count[c-1] += 1


# for c in count:
#     if c != 0 and c != 2:
#         print("No")
#         exit()

# print("Yes") 
