A = int(input())
N = int(input())
ans = 0

def isPalindrome(x, a):
    s = []
    while x:
        s.append(str(x % a))
        x //= a
    rs = s.copy()
    rs.reverse()
    return s == rs

def check(s):
    global ans
    y = int(s)
    if y <= N and isPalindrome(y, A):
        ans += y



for x in range(1, 10 ** 6):
    s = str(x)
    rs = list(s)
    rs.reverse()
    s += "".join(rs)

    check(s)
    mid = len(s) // 2
    s = s[0:mid] + s[mid+1:]
    check(s)

print(ans)


#mycode worng ans
# A = int(input())
# N = int(input())

# def change(n, k):
#     origine = []
#     compare = []
#     while n:
#         c = str(n % k)
#         origine.append(c)
#         compare.append(c)
#         n //= k
#     compare.reverse()
#     print(origine, compare)
#     if origine == compare:
#         return True
#     return False

# ans = 0
# i = "1"
# while i <= str(N):
    
