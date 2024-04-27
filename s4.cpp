#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void drive() {
        cout << "Vehicle is being driven." << endl;
    }
};

class Car : virtual public Vehicle {
public:
    void park() {
        cout << "Car is parked." << endl;
    }
};

class Boat : virtual public Vehicle {
public:
    void anchor() {
        cout << "Boat is anchored." << endl;
    }
};

class AmphibiousVehicle : public Car, public Boat {
public:
    void amphibiousDrive() {
        cout << "Amphibious vehicle is driving on land and water." << endl;
    }
};

int main() {
    AmphibiousVehicle amphibiousVehicle;
    amphibiousVehicle.drive();
    amphibiousVehicle.park();
    amphibiousVehicle.anchor();
    amphibiousVehicle.amphibiousDrive();

    return 0;
}
