#include <iostream>

using namespace std;

class Vehicle {
public:
    void drive() {
        cout << "Vehicle is being driven." << endl;
    }
};

class Car : public Vehicle {
public:
    void park() {
        cout << "Car is parked." << endl;
    }
};

class Boat : public Vehicle {
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

class HybridVehicle : public Car, public Boat {
public:
    void hybridFunction() {
        cout << "Hybrid vehicle function." << endl;
    }
};

class MultiPathVehicle : public Boat, public Car {
public:
    void multiPathFunction() {
        cout << "Multipath vehicle function." << endl;
    }
};

int main() {
    cout << "--- Multiple Inheritance ---" << endl;
    Car car;
    Boat boat;

    car.drive();
    car.park();

    boat.drive();
    boat.anchor();

    cout << endl;

    cout << "--- Hybrid Inheritance ---" << endl;
    HybridVehicle hybridVehicle;
    hybridVehicle.drive();
    hybridVehicle.park();
    hybridVehicle.anchor();
    hybridVehicle.hybridFunction();

    cout << endl;

    cout << "--- Multipath Inheritance ---" << endl;
    MultiPathVehicle multiPathVehicle;
    multiPathVehicle.drive();
    multiPathVehicle.park();
    multiPathVehicle.anchor();
    multiPathVehicle.multiPathFunction();

    cout << endl;

    cout << "--- Multiple Inheritance with Amphibious Vehicle ---" << endl;
    AmphibiousVehicle amphibiousVehicle;
    amphibiousVehicle.drive();
    amphibiousVehicle.park();
    amphibiousVehicle.anchor();
    amphibiousVehicle.amphibiousDrive();

    return 0;
}
