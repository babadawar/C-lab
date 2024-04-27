#include <iostream>
#include <string>
using namespace std;
class String {
private:
    static const int MAX = 80;
    char str[MAX];

public:
    String() {
        str[0] = '\0';
    }

    String(const char s[]) {
        strcpy(str, s);
    }

    void display() const {
        cout << str;
    }

    String operator+= (const String& s) {
        if (strlen(str) + strlen(s.str) < MAX) {
            strcat(str, s.str);
        } else {
            cout << "String is too long!" << endl;
        }
        return *this;
    }
};

int main() {
    String s1 = "Hello ";
    String s2 = "world!";
    String s3;

    cout << "s1: ";
    s1.display();
    cout << endl;

    cout << "s2: ";
    s2.display();
    cout << endl;

    s1 += s2;
    cout << "s1 after concatenation: ";
    s1.display();
    cout << std::endl;

    s3 = s1 += s2;
    cout << "s3: ";
    s3.display();
    cout << endl;

    return 0;
}
