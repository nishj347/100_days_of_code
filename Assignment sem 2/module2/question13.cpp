// Scope Resolution Operator: Write a program to access a global variable using the scope
// resolution operator inside a class method.
#include<iostream>
using namespace std;
class demo{
    static  int globalvar;
    public:
    demo(){
        globalvar++;
    }
    static void display(){
        cout<<"the variable is: "<<globalvar<<endl;
    }
};

int demo::globalvar=5;
int main(){
    demo::display(); // Output: Static Variable: 0

    // Create instances of Example
    demo obj1;
    // demo obj2;

    // Display the value of the static variable after creating objects
    demo::display(); // Output: Static Variable: 2

    return 0;

}