N = int(input())
Map = {}
for _ in range(N):
    s = input()
    if s not in Map:
        Map[s] = 0
    Map[s] += 1

mx = 0
for p in Map:
    mx = max(mx, Map[p])
words = []
for p in Map:
    if Map[p] != mx: continue
    words.append(p)

words.sort()
for w in words:
    print(w)



# N = int(input())
# count = {}

# for _ in range(N):
#     s = input()
#     if s not in count:
#         count[s] = 0
#     count[s] += 1

# words = []
# biggest = 0
# for c in count:
#     if count[c] > biggest:
#         words = []
#         words.append(c)
#         biggest = count[c]
    
#     elif count[c] == biggest:
#         words.append(c)

# words.sort()
# for w in words:
#     print(w)