N = int(input())

for i in range(N):
    length, width = map(int, input().split())

    for i in range(width):
        row = ""
        for j in range(length):
            row += 'X'
        
        print(row)
    
    print()