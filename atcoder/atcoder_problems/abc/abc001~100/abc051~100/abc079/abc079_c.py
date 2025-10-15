A = input()

for bit in range(1<<3):
    check = int(A[0])
    operation = ""
    for i in range(3):
        if bit >> i & 1:
            check += int(A[i+1])
            operation += "+"
        else:
            check -= int(A[i+1])
            operation += "-"

    if check == 7:
        print(A[0], end="")
        for i in range(3):
            print(operation[i], end="")
            print(A[i+1], end="")

        print("=7")
        exit()