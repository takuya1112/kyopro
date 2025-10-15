N = int(input())
P = list(map(int, input().split()))

v = []
for i in range(N-1):
    if P[i] < P[i+1]:
        if len(v) == 0 or ">" in v[-1] :
            v.append({"<":1})
        else:
            v[-1]["<"] += 1
    else:
        if len(v) == 0 or "<" in v[-1]:
            v.append({">":1})
        else:
            v[-1][">"] += 1

print(v)

ans = 0
for i in range(1,len(v)-1):
    if ">" in v[i]:
        ans += v[i-1]["<"] * v[i+1]["<"]

print(ans)


# my wrong ans 
# N = int(input())
# P = list(map(int, input().split()))

# ans = 0
# for i in range(N-3):
#     if P[i] < P[i + 1]:
#         for j in range(i, N-1):
#             if P[j-1] < P[j] > P[j+1]:
#                 for k in range(j, N-1):
#                     if P[k-1] > P[k] < P[k+1]:
#                         ans += 1
#                         print(P[i],P[j],P[k])
#                         break
                
# print(ans)
    
        