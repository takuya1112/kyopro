A, B = map(int, input().split())
ans = 0
for i in range(A, B+1):
    LOOP_LIST = list(str(i))
    if LOOP_LIST[0] == LOOP_LIST[4] and LOOP_LIST[1] == LOOP_LIST[3]:
        ans += 1

print(ans)

