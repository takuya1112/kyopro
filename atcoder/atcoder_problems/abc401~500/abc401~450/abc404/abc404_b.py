N = int(input())
S = [input() for _ in range(N)]
T = [input() for _ in range(N)]


def rignt_rot90(S):
    return list(zip(*S[::-1]))

def count_diff(S,T):
    count  = 0
    for i in range(N):
        for j in range(N):
            if S[i][j] != T[i][j]:
                count += 1
    return count
    # return sum([1 for si,ti in zip(S,T) for sij,tij in zip(si,ti) if sij!=tij])


ans = 10 ** 9
for rot_count in range(4):
    ans = min(ans, count_diff(S, T) + rot_count)
    S = rignt_rot90(S)

print(ans)




# N = int(input())
# S = [input() for i in range(N)]
# T = [input() for i in range(N)]

# print(S)
# print(T)

# for i in range(N):
#     for j in range(N):
#         S[i][j] = 