A, B, C = map(int, input().split())

for i in range(B+1):
    if (i * A) % B == C:
        print("YES")
        exit()

print("NO")


# A, B, C = map(int, input().split())


# for i in range(1,150):
#     if (i * A) % B == C:
#         print("YES")
#         exit()

# print("NO") 
