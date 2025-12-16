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

plant = input("Enter the name of plant: ")

if plant == "SPATHIPHYLLUM": print("Yes, Spathiphyllum is the best plant ever!")

elif plant == "spathiphyllum": print("No, I want a big Spathiphyllum!")

else: print("Spathiphyllum! Not", plant)
