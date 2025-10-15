S = input()

res = True
for c in range(ord("a"), ord("z") +1):
    con = 0
    c = chr(c)
    for s in S:
        if s == c:
            con += 1

    if con % 2 == 1:
        print("No")
        exit()

print("Yes")
    



# W = input()
# w_cnt = [0] * 26

# for w in W:
#     w_cnt[ord(w) - ord("a")] += 1


# for i in w_cnt:
#     if i % 2 != 0:
#         print("No")
#         exit()

# print("Yes")