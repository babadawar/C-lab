#include <iostream>
using namespace std;

class Int {
private:
    int value;

public:
    Int() : value(0) {}
    Int(int val) : value(val) {}

    Int operator+ (const Int& other) const {
        long double result = static_cast<long double>(value) + other.value;
        if (result > INT_MAX || result < INT_MIN) {
            cerr << "Warning: Arithmetic overflow occurred. Program terminated." << endl;
            exit(1);
        }
        return Int(static_cast<int>(result));
    }

    Int operator- (const Int& other) const {
        long double result = static_cast<long double>(value) - other.value;
        if (result > INT_MAX || result < INT_MIN) {
            cerr << "Warning: Arithmetic overflow occurred. Program terminated." << endl;
            exit(1);
        }
        return Int(static_cast<int>(result));
    }

    Int operator* (const Int& other) const {
        long double result = static_cast<long double>(value) * other.value;
        if (result > INT_MAX || result < INT_MIN) {
            cerr << "Warning: Arithmetic overflow occurred. Program terminated." << std::endl;
            exit(1);
        }
        return Int(static_cast<int>(result));
    }

    Int operator/ (const Int& other) const {
        if (other.value == 0) {
            std::cerr << "Error: Division by zero. Program terminated." << std::endl;
            exit(1);
        }
        return Int(value / other.value);
    }

    void display() const {
        std::cout << value;
    }
};

int main() {
    Int a(2147483647);
    Int b(2);
    
    Int sum = a + b;
    Int difference = a - b;
    Int product = a * b;
    Int quotient = a / b;

    std::cout << "Sum: ";
    sum.display();
    std::cout << std::endl;

    std::cout << "Difference: ";
    difference.display();
    std::cout << std::endl;

    std::cout << "Product: ";
    product.display();
    std::cout << std::endl;

    std::cout << "Quotient: ";
    quotient.display();
    std::cout << std::endl;

    return 0;
}
