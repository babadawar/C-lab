#include <iostream>

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) : value(val) {}

    MyNumber& operator-=(const MyNumber& other) {
        value -= other.value;
        return value;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    using namespace std;

    MyNumber num1(5);
    MyNumber num2(10);

    num1 -= num2;

    cout << "num1 after -= operation: " << num1.getValue() << endl;

    return 0;
}
