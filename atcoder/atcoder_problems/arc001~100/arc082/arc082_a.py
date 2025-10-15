MAX = 110000
N = int(input())
A = list(map(int, input().split()))

nums = [0] * MAX
for i in range(N):
    nums[A[i]] += 1

res = 0
for x in range(1, MAX-1):
    num = nums[x-1] + nums[x] + nums[x+1]
    res = max(res, num)

print(res)


# N = int(input())
# A = list(map(int, input().split()))
# A.sort()
# count = [0] * (10 ** 6)
# for a in A:
#     a -= 1
#     count[a] += 1

# ans = 0
# for i in range(1, 10 ** 6 -1):
#     c = count[i-1] + count[i] + count[i+1]
#     ans = max(ans, c)
# print(ans)
