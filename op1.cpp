#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    Distance(int ft, float in) : feet(ft), inches(in) {}

    void getDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void showDistance() const {
        cout << feet << " feet " << inches << " inches";
    }

    Distance operator- (const Distance& d) const {
        int ft = feet - d.feet;
        float in = inches - d.inches;
        
        if (in < 0) {
            ft--;
            in += 12;
        }
        
        return Distance(ft, in);
    }
};

int main() {
    Distance dist1, dist2, dist3;
    
    cout << "Enter the first distance: ";
    dist1.getDistance();
    cout << "Enter the second distance: ";
    dist2.getDistance();
    
    dist3 = dist1 - dist2;
    
    cout << "Result: ";
    dist3.showDistance();
    cout << endl;
    
    return 0;
}
