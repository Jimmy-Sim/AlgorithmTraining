N = int(input())
count1, count0 = 0, 0
for i in range (N):
    score = int(input())
    if score == 1:
        count1 += 1
    else:
        count0 += 1

if count1 > count0:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")