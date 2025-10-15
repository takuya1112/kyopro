N = int(input())

n = N
while True:
    word_n = str(n)
    if int(word_n[0]) * int(word_n[1]) == int(word_n[2]):
        print(n)
        break
    n += 1