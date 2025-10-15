S = input()
S_list = [0 for i in range(26)]


for i in range(len(S)):
    S_list[ord(S[i]) - ord("a")] += 1


for i in range(26):
    if S_list[i] == 0:
        print(chr(i + ord("a")))
        exit()

print("None")