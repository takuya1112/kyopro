cand = ["ABC", "ARC", "AGC", "AHC"]
used = [True for i in range(4)]

for i in range(3):
    s = input()
    for j in range(4):
        if s == cand[j]:
            used[j] = False

for i in range(4):
    if used[i]:
        print(cand[i]) 



# s = [input() for _ in range(3)]
# if "ABC" not in s: print("ABC")
# if "ARC" not in s: print("ARC")
# if "AGC" not in s: print("AGC")
# if "AHC" not in s: print("AHC")
