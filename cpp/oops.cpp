//Author: nishj347 @github
// Object-Oriented Concepts: Write a program to demonstrate the principles of object-oriented programming
//  (abstraction, encapsulation, inheritance, and polymorphism)
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    virtual void wheel() = 0; //making Vehicle a abstract class
    virtual ~Vehicle() {} // Virtual destructor for proper cleanup
};

class Car : public Vehicle {
    string name; // Encapsulated member variable

public:
    Car(string n) : name(n) {}
    void wheel() override {
        cout << "It has 4 wheels and is of grey colour" << endl;
    }

    // Setter for the name
    void setName(string n) {
        name = n;
    }

    // Getter for the name
    string getName() {
        return name;
    }
};

class Truck : public Car {
public:
    // Constructor for Truck that calls the Car constructor
    Truck(string n) : Car(n) {}
    void wheel() override {
        cout << "It also has 4 wheels and is of black colour" << endl;
    }
};

int main() {
    // Demonstrating polymorphism
    Vehicle *v = new Car("Turbo");
    Vehicle *v1 = new Truck("Mighty");
    v->wheel();
    v1->wheel();

    // Using dynamic_cast to safely cast Vehicle* to Car*
    Car *c = dynamic_cast<Car*>(v);
    if (c) {
        cout << "Car name: " << c->getName() << endl;
    } else {
        cout << "v is not pointing to a Car object" << endl;
    }

    // Using dynamic_cast to safely cast Vehicle* to Truck*
    Truck *t = dynamic_cast<Truck*>(v1);
    if (t) {
        cout << "Truck name: " << t->getName() << endl;
    } else {
        cout << "v1 is not pointing to a Truck object" << endl;
    }

    // Cleaning up dynamically allocated memory
    delete v;
    delete v1;

    return 0;
}
