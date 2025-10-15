S = input()
s_list = [0 for i in range(26)]

for s in S:
    s_list[ord(s) - ord("a")] += 1

for i in range(len(s_list)):
    if s_list[i] == 0:
        print(chr(i + ord("a")))
        break

    