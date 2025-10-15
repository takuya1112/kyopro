S = input()
T = input()


ok = False
for i in range(len(S)-1):
    s_list = list(S)
    s_list[i], s_list[i+1] = s_list[i+1],s_list[i]

    if "".join(s_list) == T or S == T:
        ok = True

if ok:
    print("Yes")
else:
    print("No")