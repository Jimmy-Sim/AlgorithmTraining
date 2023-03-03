N = int(input())

for i in range(1, N):
    N *= i

if N == 0:
    print(1)
else:
    print(N)