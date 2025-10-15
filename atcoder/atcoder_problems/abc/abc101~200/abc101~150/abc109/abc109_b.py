N = int(input())
W = [input() for _ in range(N)]

ok = True

for i in range(N-1):
    if W[i][-1] != W[i+1][0]:
        ok = False
        break

word = set(W)
if len(word) != N:
    ok = False

if ok:
    print("Yes")
else:
    print("No")
    

# N = int(input())
# shiritori = set()

# ok = True

# t = input()
# shiritori.add(t)

# for _ in range(1,N):
#     s = input()
#     if t[-1] != s[0]:
#         ok = False

#     t = s
#     shiritori.add(s)
    



# if len(shiritori) != N:
#     ok = False



# if ok:
#     print("Yes")
# else:
#     print("No")