a, b, c = int(input()), int(input()), int(input())

minimum, maximum = min(a, min(b, c)), max(a, max(b, c))

if a != minimum and a != maximum:
    print(a)
elif b != minimum and b != maximum:
    print(b)
else:
    print(c)