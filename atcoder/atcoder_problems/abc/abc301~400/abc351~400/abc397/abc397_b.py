S = input()
S = "o" + S + "i"

ans = 0
for i in range(len(S)-1):
    if S[i] == S[i+1]: ans += 1

print(ans)


# S = input()
# ans = 0
# expect = "i"
# for c in S:
#     if c != expect:ans += 1
#     expect = "o" if c == "i" else "i"

# if S[-1] == "i": ans += 1
# print(ans)



# S = input()

# ans = 0
# if S[0] != "i":
#     ans += 1
# for i in range(len(S)-1):
#     if S[i] == "i" and S[i+1] == "i":
#         ans += 1
#     elif S[i] == "o" and S[i+1] == "o":
#         ans += 1

# if (len(S) + ans) % 2 == 1:
#     ans += 1

# print(ans) 
