from itertools import combinations

def is_full_house(hand):
    hand.sort()
    return (hand[0] == hand[1] == hand[2] and hand[3] == hand[4] and hand[2] != hand[3]) or \
           (hand[0] == hand[1] and hand[2] == hand[3] == hand[4] and hand[1] != hand[2])

cards = list(map(int, input().split()))

for comb in combinations(cards, 5):
    if is_full_house(list(comb)):
        print("Yes")
        break
else:
    print("No")



# for i in range(n):
    


# A  = list(map(int, input().split()))

# card_list = []
# ans = False

# for i in range(1, 14):
#     card_list.append(A.count(i))

# for i in range(len(card_list)):
#     if card_list[i] >= 2:
#         for j in range(len(card_list)):
#             if card_list[j] >= 3 and card_list[i] != card_list[j]:
#                 ans = True
#                 break

# if ans:
#     print("Yes")
# else:
#     print("No")
