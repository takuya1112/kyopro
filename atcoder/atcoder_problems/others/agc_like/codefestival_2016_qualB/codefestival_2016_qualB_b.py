N, A, B = map(int, input().split())
S = input()
Pass_count = 0
b_list = []

for i in range(N):
    if A + B > Pass_count and S[i] != "c":
        if S[i] == "a":
            print("Yes")
            Pass_count += 1


        if S[i] == "b":
            if B > len(b_list):
                print("Yes")
                Pass_count += 1
                b_list.append("b")
            else:
                print("No")

    else:
        print("No")
