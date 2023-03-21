length, width = map(int, input().split())

if (length * width) / (5 * 4840) % 1 != 0:
    print((length * width) // (5 * 4840) + 1)
else:
    print((length * width) / (5 * 4840))