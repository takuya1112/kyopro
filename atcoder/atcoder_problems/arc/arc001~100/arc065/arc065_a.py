S = input()
T = ""

add_list = ["dream", "dreamer", "erase", "eraser"]

s = ""
for  i in range(len(S)):
    s = S[-1-i] + s
    if s in add_list:
        T = s + T
        s = ""



if S == T:
    print("YES")
else:
    print("NO")

