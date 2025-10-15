k = int(input())
a, b = map(str, input().split())

def read(s):
    res = 0
    for c in s:
        res = res * k + (int(c))
    return res


a = read(a)
b = read(b)
print(a * b)


# k = int(input())
# a, b = map(str, input().split())

# def cal(x):
#     n = 0
#     for i in range(len(x)):
#         j = int(x[i])
#         n += j * k ** (len(x)-1-i)
#     return n

# print(cal(a) * cal(b))
