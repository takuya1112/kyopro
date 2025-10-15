P = int(input())
x = 1
for i in range(1, 11):
    x *= i

ans = 0
for i in range(10, 0, -1):
    ans += P // x
    P %= x
    x //= i

print(ans)



# P = int(input())
# ans = 0
# x = 2
# while P > 0:
#     ans += P % x
#     P //= x
#     x += 1
# print(ans) 



# P = int(input())

# def makeMoney(n):
#     money = 1
#     for i in range(1, n+1):
#         money *= i
#     return money

# ten = makeMoney(10)
# nine = makeMoney(9)
# eight = makeMoney(8)
# seven = makeMoney(7)
# six = makeMoney(6)
# five = makeMoney(5)
# four = makeMoney(4)
# three = makeMoney(3)
# two = makeMoney(2)
# one = makeMoney(1)

# ans = 0
# ans += P // ten
# P %= ten

# ans += P // nine
# P %= nine

# ans += P // eight
# P %= eight

# ans += P // seven
# P %= seven

# ans += P // six
# P %= six

# ans += P // five
# P %= five

# ans += P // four
# P %= four

# ans += P // three
# P %= three

# ans += P // two
# P %= two

# ans += P // one
# P %= one

# print(ans)