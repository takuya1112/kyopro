V, A, B, C = map(int, input().split())
V %= A+B+C

if V < A:
    print("F")
elif V < A+B:
    print("M")
else:
    print("T")



# V, A, B, C = map(int, input().split())

# while V >= 0:
#     V -= A
#     if V < 0:
#         print("F")
#         break
#     V -= B
#     if V < 0:
#         print("M")
#         break
#     V -= C
#     if V < 0:
#         print("T")
#         break