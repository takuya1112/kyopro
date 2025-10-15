s = int(input())

done = set()
done.add(s)

cur = s

for i in range(2,1000100):
    nxt = 0
    if cur % 2 == 0: nxt = cur // 2
    else: nxt = 3 * cur + 1

    if nxt in done:
        print(i)
        exit()
    else:
        done.add(nxt)
        cur = nxt





# s = int(input())

# check = set()
# check.add(s)

# count = 1
# while True:
#     if s % 2 == 0:
#         s //= 2
#     else:
#         s = 3 * s + 1
    
#     if s in check:
#         break

#     check.add(s)
#     count += 1

# count += 1


# print(count)

