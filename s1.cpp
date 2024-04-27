#include <iostream>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override {
        return length * width;
    }
    double perimeter() const override {
        return 2 * (length + width);
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    Rectangle rectangle(5, 3);
    Circle circle(4);

    cout << "Rectangle Area: " << rectangle.area() << endl;
    cout << "Rectangle Perimeter: " << rectangle.perimeter() << endl;

    cout << "Circle Area: " << circle.area() << endl;
    cout << "Circle Perimeter: " << circle.perimeter() << endl;

    return 0;
}
