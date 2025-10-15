N = input()

t_f = True
if N.count("1") != 1:
    t_f = False


if N.count("2")  != 2:
    t_f = False


if N.count("3") != 3:
    t_f = False

if t_f:
    print("Yes")
else:
    print("No")
