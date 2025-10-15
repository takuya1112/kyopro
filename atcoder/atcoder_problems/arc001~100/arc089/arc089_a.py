N = int(input())
t_x_y = [[0,0,0]]

for i in range(N):
    t_x_y.append(list(map(int, input().split())))

can_go = True
for i in range(N):
    T, X, Y = t_x_y[i]
    t, x, y = t_x_y[i+1]
    time_dif = t - T
    go_to = abs(X - x) + abs(Y - y)
    if time_dif % 2 != go_to % 2 or time_dif < go_to:
        can_go = False

if can_go:
    print("Yes")
else:
    print("No")
