while True:
    phrase = input()
    if phrase == '#':
        break

    count = 0
    for letter in phrase:
        if letter.lower() == 'a' or letter.lower() == 'e' or letter.lower() == 'i' or letter.lower() == 'o' or letter.lower() == 'u':
            count += 1
    
    print(count)