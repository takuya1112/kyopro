N, M = map(int, input().split())
i, j = map(int, input().split())

for _ in range(M - 1):
    i2 , j2 = map(int, input().split())
    if i2 == 0 and i != 0 or abs(i - i2) > i2:
        print("S U")
        i = 0

    elif i2 == 19 and i != 19 or abs(i - i2) > abs(i2 - 19):
        print("S D")
        i = 19

    if j2 == 0 and j != 0 or abs(j - j2) > j2:
        print("S L")
        j = 0

    elif j2 == 19 and j != 19 or abs(j - j2) > abs(j2 - 19):
        print("S R")
        j = 19
 
 
    while i != i2 or j != j2:
        if i > i2:
            print("M U")
            i -= 1

        
        elif i < i2:
            print("M D")
            i += 1

        
        elif j > j2:
            print("M L")
            j -= 1


        elif j < j2:
            print("M R")
            j += 1

        

