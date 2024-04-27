#include<iostream>
using namespace std;
class Shape {
public:

    virtual double calculateArea() = 0;
};
class Square : public Shape {
private:
    double length;
public:
    Square(double l) : length(l) {}
    double calculateArea() {
        return length * length;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculateArea() {
        return 3.14 * radius * radius;
    }
};
int main() {
    Shape* shapes[3];
    shapes[0] = new Square(4);
    shapes[1] = new Rectangle(3, 5);
    shapes[2] = new Circle(2);

    for (int i = 0; i < 3; i++) {
        std::cout << "Area of shape " << i << " is: " << shapes[i]->calculateArea() << std::endl;
    }

    return 0;
}
