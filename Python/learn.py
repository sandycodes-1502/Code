"""
print("Hi")
print('Hi')
a = 10
b = 20
if a == b:
    print('A is equal to B')
else:
    print('A is not equal to B')
c = a + b
d = 30

if c != d:
    print("A + B is d")
elif c == 30:
    print("A + B is equal to 30")

print("A + B is", a+b)
print('A + B is', a+b)

x = int(input("Enter your age: "))
name = input("Enter your name: ")
print("Hi, " + name + " your age is", x)
print(type(x))
print(type(name)) #
"""

# x = int(input())
# y = int(input())

# x = x % y
# print(x)
# x = x % y
# print(x)
# y = y % x

# print(y)

# plant = input("Enter the name of plant: ")

# if plant == "SPATHIPHYLLUM": print("Yes, Spathiphyllum is the best plant ever!")

# elif plant == "spathiphyllum": print("No, I want a big Spathiphyllum!")

# else: print("Spathiphyllum! Not", plant)

# largest_number = -999999999

# number = int(input("Enter a number (-1 to stop): "))

# while number != -1:
#     if number > largest_number:
#         largest_number = number
#     number = int(input("Enter next number (-1 to stop): "))

# print("The largest number is", largest_number)

# odd_numbers = 0
# even_numbers = 0

# number = int(input("Enter a number (0 to stop): "))

# while number:
#     if number % 2 == 0:
#         even_numbers += 1
#     else: odd_numbers +=1
#     number = int(input("Enter a number (0 to stop): "))

# print("Total even numbers are", even_numbers, "and odd numbers are", odd_numbers)

#secret_number = 777

# print(
# """
# +================================+
# | Welcome to my game, muggle!    |
# | Enter an integer number        |
# | and guess what number I've     |
# | picked for you.                |
# | So, what is the secret number? |
# +================================+
# """)

# number = int(input("Enter a number, muggle: "))
# while number != secret_number:
#     print("Ha ha! You're stuck in my loop!")
#     number = int(input("Enter a number, muggle: "))

# print("Well done, muggle! You are free now.")

# import time
# for a in range(5):
#     print( a+1, "Mississippi")
#     time.sleep(1)
# print("Ready or not, here I come!")

# secret_word = "chupacabra"

# while True:
#     word = input("Enter a word: ")
#     if word == secret_word:
#         break
#     print("You guessed wrong. Guess again!")
# print("You've successfully left the loop.")

# user_word = input("Enter a word: ")

# user_word = user_word.upper()

# words_without_vowels = ""

# vowel = ["A", "E", "I", "O", "U"]

# for i in user_word:
#     if i == "A" or i == "E" or i == "I" or i == "O" or i == "U":
#         continue
#     words_without_vowels += i
# print(words_without_vowels)

"""

c0 = int(input("Enter a number: "))
steps = 0
if c0 > 0:
    if c0 % 2 == 0:
        c0 = int(c0 / 2)
        steps += 1
        print(c0)
    while c0 !=1:
        if c0 % 2 != 0: 
            c0 = (3 * c0) + 1
            print(c0)
            steps += 1
        else: 
            c0 = int(c0 / 2)
            print(c0)
            steps += 1
print("Steps:", steps)

"""

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

sum = a + b
product = a * b
subtraction = a - b
division = a / b

print("Sum:", sum)
print("Product:", product)
print("Subtraction:", subtraction)
print("Division:", division)