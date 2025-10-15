S, K = input().split()
K = int(K)

st = set()

def permute(s, path="", used=None):
    if used is None:
        used = [False] * len(s)
    if len(path) == len(s):
        st.add(path)
        return
    for i in range(len(s)):
        if not used[i]:
            used[i] = True
            permute(s, path+s[i], used)
            used[i] = False

permute(S)
result = sorted(list(st))
print(result[K-1])





# import itertools

# S, K = input().split()
# K = int(K)

# perms = set(itertools.permutations(S))
# result = ["".join(p) for p in perms]
# result.sort()
# print(result[K-1])