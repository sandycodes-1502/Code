#include <iostream>
#include <cmath>

using namespace std;
class Shape {
public:
    virtual double area() = 0; // Pure virtual function for area calculation
    virtual double perimeter() = 0; // Pure virtual function for perimeter calculation
};  
class Circle : public Shape {
private:
    double radius;  
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return M_PI * radius * radius;
    }
    double perimeter() override {
        return 2 * M_PI * radius;
    }
};
class Rectangle : public Shape {
private:
    double length;
    double width;  
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;  
    }
    double perimeter() override {
        return 2 * (length + width);
    }
};
class Triangle : public Shape {
private:
    double a, b, c;  
public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}
    double area() override {
        double s = (a + b + c) / 2; // Semi-perimeter
        return sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    }
    double perimeter() override {
        return a + b + c;
    }
};
int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);  
    Shape* shape3 = new Triangle(3.0, 4.0, 5.0);
    cout << "=====Shape Details=====" << endl;
    cout << "Circle Area: " << shape1->area() << endl;
    cout << "Circle Perimeter: " << shape1->perimeter() << endl;  
    cout << "Rectangle Area: " << shape2->area() << endl;
    cout << "Rectangle Perimeter: " << shape2->perimeter() << endl;  
    cout << "Triangle Area: " << shape3->area() << endl;
    cout << "Triangle Perimeter: " << shape3->perimeter() << endl;
    delete shape1;
    delete shape2;  
    delete shape3;
    return 0;
}