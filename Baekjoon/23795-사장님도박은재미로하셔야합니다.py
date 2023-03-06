totalBet = 0
while True:
    bet = int(input())

    if bet == -1:
        break
    else:
        totalBet += bet

print(totalBet)