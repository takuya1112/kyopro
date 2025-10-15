n = int(input())
a = list(map(int, input().split()))

MX = 100005
cnt = [0] * MX
for i in range(n):
    cnt[a[i]] += 1

total = sum(a)

q = int(input())
for i in range(q):
    b, c = map(int, input().split())
    total += (c - b) * cnt[b]
    cnt[c] += cnt[b]
    cnt[b] = 0
    print(total)




# n = int(input())
# a = list(map(int, input().split()))
# q = int(input())
# b = []
# c = []
# for i in range(q):
#     i, j = map(int, input().split())
#     b.append(i)
#     c.append(j)

# s = sum(a)
# cnt = [0] * (10 ** 5 + 10)
# for x in a:
#     cnt[x] += 1

# for i in range(q):
#     bq = b[i]
#     cq = c[i]
#     d = (cq - bq) * cnt[bq]
#     cnt[cq] += cnt[bq]
#     cnt[bq] = 0
#     s += d
#     print(s)
