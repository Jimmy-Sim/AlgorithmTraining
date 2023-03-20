N = int(input())
phrase = input()

if phrase[len(phrase) - 1] == 'G':
    print(phrase[:len(phrase) - 1])
else:
    print(phrase + 'G')