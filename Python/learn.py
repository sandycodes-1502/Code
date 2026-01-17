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

# a = int(input("Enter first number: "))
# b = int(input("Enter second number: "))

# sum = a + b
# subtraction = a - b

# if b != 0:
#     division = a / b
#     product = a * b
# else:
#     division = "Undefined (division by zero)"
#     product = a * b

# print("Sum:", sum)
# print("Product:", product)
# print("Subtraction:", subtraction)
# print("Division:", division)

# def factorial(n):
#     if n == 0 or n == 1:
#         return 1
#     else:
#         return n * factorial(n - 1)

# g = int(input("Enter a number: "))
# print("Factorial of", g, "is", factorial(g))


# beatles = []

# # step 1
# print("Step 1:", beatles)

# beatles.append("John Lennon")
# beatles.append("Paul McCartney")
# beatles.append("George Harrison")

# # step 2
# print("Step 2:", beatles)
# for i in range(2):
#     beatles.append(input(print("Enter band member name: ")))


# # step 3
# print("Step 3:", beatles)

# del(beatles[3], beatles[3])
# # step 4
# print("Step 4:", beatles)

# beatles.insert(0, "Ringo Starr")
# # step 5
# print("Step 5:", beatles)


# # testing list legth
# print("The Fab", len(beatles))

# Bubble Sort

# my_list = [8, 10, 6, 2, 4]  # list to sort 

# for i in range(len(my_list) - 1):  # we need (5 - 1) comparisons
#     if my_list[i] > my_list[i + 1]:  # compare adjacent elements
#         my_list[i], my_list[i + 1] = my_list[i + 1], my_list[i]  # If we end up here, we have to swap the elements.

# print(my_list)

my_list = [8, 10, 6, 2, 4]  # list to sort
swapped = True  # It's a little fake, we need it to enter the while loop.

while swapped:
    swapped = False  # no swaps so far
    for i in range(len(my_list) - 1):
        if my_list[i] > my_list[i + 1]:
            swapped = True  # a swap occurred!
            my_list[i], my_list[i + 1] = my_list[i + 1], my_list[i]

print(my_list)



