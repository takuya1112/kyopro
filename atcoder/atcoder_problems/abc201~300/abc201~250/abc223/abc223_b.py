S = input()

v = []
for i in range(len(S)):
    v.append(S[i:] + S[:i])

print(min(v))
print(max(v))


# S = input()

# S_min = S
# S_max = S
# for i in range(len(S)):
#     head = S[i:]
#     tail = S[:i]
#     check = head + tail


#     if check < S_min:
#         S_min = check


#     if check > S_max:
#         S_max = check




# print(S_min)
# print(S_max)

