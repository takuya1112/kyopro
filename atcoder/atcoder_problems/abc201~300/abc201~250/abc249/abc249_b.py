S = input()
upper = False
lower = False
st = set()

for c in S:
    if c.isupper(): upper = True
    if c.islower(): lower = True
    st.add(c)

if upper and lower and len(S) == len(st):
    print("Yes")
else:
    print("No")



# S = input()
# diff = True

# for i in range(len(S)):
#     for j in range(i+1, len(S)):
#         if S[i] == S[j]:
#             diff = False

# small = False
# big = False
# for i in range(len(S)):
#     if ord(S[i]) in range(ord("a"), ord("z") +1):
#         small = True
#     if ord(S[i]) in range(ord("A"), ord("Z") +1):
#         big = True


# if diff and small and big:
#     print("Yes")
# else:
#     print("No")