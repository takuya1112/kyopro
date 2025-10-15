D = list(input())

north = "N"
east = "E"
west = "W"
south = "S"

ans = ""

for i in range(len(D)):
    if D[i] == north:
        ans += south
    
    if D[i] == east:
        ans += west

    if D[i] == west:
        ans += east
    
    if D[i] == south:
        ans += north

print(ans)