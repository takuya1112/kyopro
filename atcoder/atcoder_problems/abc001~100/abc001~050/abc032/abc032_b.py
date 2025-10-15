S = input()
K = int(input())

ans = set()
for i in range(len(S)+1 - K):
    ans.add(S[i:i+K])

print(len(ans))