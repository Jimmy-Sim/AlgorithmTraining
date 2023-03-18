N = int(input())

for i in range(N):
    population, time = map(int, input().split())

    lapse7, lapse4 = 0, 0
    for j in range(1, time + 1):
        lapse7 += 1
        lapse4 += 1

        if lapse7 % 7 == 0:
            population -= 1
        if lapse4 % 4 == 0:
            population += 1
    
    print(population)