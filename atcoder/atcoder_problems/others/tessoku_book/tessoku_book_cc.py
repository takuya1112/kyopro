N = input()

Answer = 0
for i in range(len(N)):
	keta = 0
	kurai = (2 ** (len(N) - 1 - i))
	if N[i] == '1':
		keta = 1
	Answer += keta * kurai


print(Answer)


# N = list(input())
# N.reverse()


# ans = 0
# for i in range(len(N)):
#     ans += 2 ** i * int(N[i])

# print(ans)