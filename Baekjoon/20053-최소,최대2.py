N = int(input())

for i in range(N):
    M, numbers = int(input()), []
    numbers = [int(x) for x in input().split()]
    minNum, maxNum = min(numbers), max(numbers)
    print(minNum, maxNum)