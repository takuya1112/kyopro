N, M = map(int, input().split())
K_S = [list(map(int, input().split())) for _ in range(M)]

P = 0
p_list = list(map(int, input().split()))
for i in range(len(p_list)):
    P |= p_list[i] << i


print(P)
print(bin(P))


A = [0] * N 
for i in range(M):
    for s in K_S[i][1:]:
        s -= 1
        A[s] |= 1 << i


print(A)
for a in A:
    print(bin(a))
    

ans = 0
for bit in range(1 << N):
    t = 0
    for i in range(N):
        if bit >> i & 1:
            t ^= A[i]
    
    if t == P:
        ans += 1

print(ans)
