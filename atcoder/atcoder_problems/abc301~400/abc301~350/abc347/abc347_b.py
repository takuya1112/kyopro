S = input()
S_set = set()

for i in range(len(S)):
    for j in range(i+1, len(S)+1):
        S_set.add(S[i:j])

print(S_set)
print(len(S_set))