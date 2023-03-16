ISBN = "9780921418"
digit1, digit2, digit3 = input(), input(), input()
ISBN += digit1
ISBN += digit2
ISBN += digit3

order, ISBN_sum = 0, 0
for i in range(len(ISBN)):
    digit = int(ISBN[i])

    if order % 2 == 0:
        digit *= 1
    else:
        digit *= 3
    
    ISBN_sum += digit
    order += 1

print(f"The 1-3-sum is {ISBN_sum}")