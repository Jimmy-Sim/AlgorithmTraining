N = int(input())

for i in range(N):
    string, start, end = input().split()
    start, end = int(start), int(end)

    newString = ""
    for j in range(len(string)):
        if j < start or j >= end:
            newString += string[j]
    
    print(newString)