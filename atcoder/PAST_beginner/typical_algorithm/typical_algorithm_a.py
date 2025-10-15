import bisect
N, K = map(int, input().split())
A = list(map(int, input().split()))

ok = bisect.bisect_left(A, K)
if ok == N:
    print(-1)
else:
    print(ok)



# N, K = map(int, input().split())
# A = list(map(int, input().split()))

# ok = N
# ng = -1
# while abs(ok-ng) > 1:
#     mid = (ok+ng) // 2
#     if A[mid] >= K:
#         ok = mid
#     else:
#         ng = mid

# if ok == N:
#     print(-1)
# else:
#     print(ok)



# N, K = map(int, input().split())
# A = list(map(int, input().split()))

# first = 0
# last = N -1

# while last - first > 1:
#     i = (first + last) // 2
#     if A[i] > K:
#          last = i
#     else:
#          first = i

# if N -1 == last:
#      print(-1)
# else:
#     print(last)





# N, K = map(int, input().split())
# A = list(map(int, input().split()))


# for i in range(N):
#     if A[i] >= K:
#         print(i)
#         exit()

# print(-1)