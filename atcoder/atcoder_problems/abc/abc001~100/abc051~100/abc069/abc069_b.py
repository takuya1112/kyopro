s = input()
s_list = list(s)
count = str(len(s_list) - 2)
ans = s_list[0] + count + s_list[-1]

print(ans)