N = int(input())

for i in range(N):
    l1, w1, l2, w2 = [int(x) for x in input().split()]

    if l1 * w1 > l2 * w2:
        print("TelecomParisTech")
    elif l1 * w1 < l2 * w2:
        print("Eurecom")
    else:
        print("Tie")