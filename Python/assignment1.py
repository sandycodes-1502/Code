a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print("Sum:", a + b)
print("Product:", a * b)
print("Subtraction:", a - b)
if b != 0:
    print("Division:", round(a / b, 3))
else:
    print("Division: Undefined (division by zero)")