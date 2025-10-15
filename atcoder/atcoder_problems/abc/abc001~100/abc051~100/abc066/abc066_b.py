S = input()

for i in range(len(S),0,-1):
    check = S[:i]
    check_len = len(check) // 2
    
    if check[:check_len] == check[check_len:] and i != len(S):
        print(i)
        break
    

