while True:
    N = int(input())
    if N == 0:
        break
    
    sum = N
    for i in range(1, N):
        sum += i
    
    print(sum)