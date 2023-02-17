N = int(input())
votes = input()
aCount, bCount = 0, 0
for i in range(N):
    if votes[i] == 'A':
        aCount += 1
    else:
        bCount += 1

if aCount > bCount:
    print('A')
elif aCount == bCount:
    print("Tie")
else:
    print('B')