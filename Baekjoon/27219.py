N = int(input())
roman = ""

for i in range(N // 5):
    roman += 'V'
for i in range(N % 5):
    roman += 'I'

print(roman)