N = int(input())
SL = []

for i in range(N):
    s = input()
    SL.append(s)

SL = sorted(SL, key=len)
print("".join(SL))