A, B, C, D = map(int, input().split())

ok = False

if A > C:
    ok = True

if A == C and B > D:
    ok = True

if ok:
    print("Yes")
else:
    print("No") 

