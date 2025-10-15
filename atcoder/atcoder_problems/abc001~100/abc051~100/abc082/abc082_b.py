s = input()
t = input()


s_sort = sorted(s)
t_sort = sorted(t,reverse=True)

if s_sort < t_sort:
    print("Yes")
else:
    print("No")