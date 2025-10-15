K = int(input())
A, B = map(int, input().split())

ok = False

x = A // K
u = B // K

if x < u:
    ok = True

if A % K == 0:
    ok = True

if ok:
    print("OK")
else:
    print("NG")



# K = int(input())
# A, B = map(int, input().split())

# ok = False

# for i in range(0, 10000000000):
#     if i * K > B:
#         break

#     if A <= i * K <= B:
#         ok = True
#         break

# if ok:
#     print("OK")
# else:
#     print("NG")



# K = int(input())
# A, B = map(int, input().split())

# for i in range(A,B+1):
#     if i % K == 0:
#         print("OK")
#         exit()

# print("NG")