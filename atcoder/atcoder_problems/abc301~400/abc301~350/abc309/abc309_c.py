N, K = list(map(int, input().split()))
a_b = []

tot = 0

for i in range(N):
    a, b = map(int, input().split())
    tot += b
    a_b.append([a, b])
a_b = sorted(a_b)


if tot <= K:
    print(1)

else:
    for a, b in a_b:
        tot -= b
        if tot <= K:
            print(a + 1)
            break


# my wrong code
# N, K = list(map(int, input().split()))
# a_b = []

# for i in range(N):
#     a_b.append(list(map(int, input().split())))
# a_b = sorted(a_b)

# total_b = sum(b for n, b in a_b)

# for i in range(N):

#     if total_b <= K:
#         if i == 0:
#             print(a_b[i][0])
#         else:
#             print(a_b[i-1][0] + 1)
#         break
    
#     total_b -= a_b[i][1]

# else:
#     print(a_b[-1][0] + 1)
    