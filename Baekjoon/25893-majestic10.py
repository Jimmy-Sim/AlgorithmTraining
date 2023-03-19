N = int(input())

for i in range(N):
    a, b, c = map(int, input().split())
    print(f"{a} {b} {c}")

    if a >= 10 and b >= 10 and c >= 10:
        print("triple-double\n")
    elif (a >= 10 and b >= 10) or (a >= 10 and c >= 10) or (b >= 10 and c >= 10):
        print("double-double\n")
    elif a >= 10 or b >= 10 or c >= 10:
        print("double\n")
    else:
        print("zilch\n")