n = int(input())
a = list(map(int, input().split()))

numl = [0] * (n+1)
numr = [0] * (n+1)

st = set()
for i in range(n):
    st.add(a[i])
    numl[i+1] = len(st)

st = set()
for i in range(n-1, -1, -1):
    st.add(a[i])
    numr[i] = len(st)

ans = 0
for i in range(1, n):
    ans = max(ans, numl[i] + numr[i])
print(ans)


# n = int(input())
# a = list(map(int, input().split()))
# count = [0] * (n-1)

# s = set()
# for i in range(n-1):
#     s.add(a[i])
#     count[i] += len(s)


# s2 = set()
# for i in range(n-1, 0, -1):
#     s2.add(a[i])
#     count[i-1] += len(s2)

# ans = 0
# for i in range(len(count)):
#     ans = max(ans, count[i])

# print(ans)
