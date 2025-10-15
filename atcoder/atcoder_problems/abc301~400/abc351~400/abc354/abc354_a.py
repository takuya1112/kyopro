H = int(input())

plant = 0
count = 0
while plant <= H:
    plant += 1 << count
    count += 1

print(count)