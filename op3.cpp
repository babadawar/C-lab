#include <iostream>
using namespace std;


class Time {
private:
    int hours;
    int minutes;
    
public:
    Time() : hours(0), minutes(0) {}
    
    Time(int h, int m) : hours(h), minutes(m) {}
    
    void display() const {
        cout << hours << " hours " << minutes << " minutes";
    }
    
    Time operator+ (const Time& t) const {
        int total_minutes = minutes + t.minutes;
        int total_hours = hours + t.hours + total_minutes / 60;
        total_minutes %= 60;
        
        return Time(total_hours, total_minutes);
    }
};

int main() {
    Time t1(2, 30);
    Time t2(1, 45);
    
    Time sum = t1 + t2;
    
    cout << "Time 1: ";
    t1.display();
    cout << std::endl;
    
    cout << "Time 2: ";
    t2.display();
    cout << std::endl;
    
    cout << "Sum of times: ";
    sum.display();
    cout << std::endl;
    
    return 0;
}
