A, B, C, X, Y = map(int, input().split())
ans = A * X + B * Y

how_many = 2 * (min(X,Y))
c_yen = C * how_many

X_Y = 0
if X > Y:
    X_Y = A * (X - Y)
elif Y > X:
    X_Y = B * (Y - X)
c_yen += min(X_Y, C * 2 * (abs(X-Y)))

print(min(ans, c_yen))