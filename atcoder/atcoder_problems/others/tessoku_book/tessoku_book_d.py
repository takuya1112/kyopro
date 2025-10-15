N = int(input())


for x in [9,8,7,6,5,4,3,2,1,0]:
	wari = (2 ** x)
	print((N // wari) % 2, end='')


print("")



# N = int(input())

# ans = ["0"] * 10
# count = 9
# while N > 0:
#     ans[count] = str(N % 2)
#     N //= 2
#     count -= 1

# print("".join(ans))