import math

N = int(input())

for i in range(N):
    area, price1 = map(int, input().split())
    radius, price2 = map(int, input().split())

    if ((area / price1) > (((radius ** 2) * math.pi) / price2)):
        print("Slice of pizza")
    else:
        print("Whole pizza")