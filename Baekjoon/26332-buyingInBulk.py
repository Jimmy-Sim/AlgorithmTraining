N = int(input())

for i in range(N):
    quantity, price = map(int, input().split())
    
    print(f"{quantity} {price}")
    print(price + (quantity - 1) * (price - 2))