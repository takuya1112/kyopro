S = input()

A = []
Z = []

for i in range(len(S)):
    if S[i] == "A":
        A.append(i)
    elif S[i] == "Z":
        Z.append(i)

print(max(Z) - min(A) + 1)