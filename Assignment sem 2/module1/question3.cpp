//  Abstraction: Write a C++ program to create an abstract class Shape with a pure virtual
// function area() and derive classes Circle and Rectangle.
#include <iostream>
using namespace std;
class shape{
    virtual double area()=0;
};
class circle:public shape{
    int radius;
    public:
    circle(int r):radius(r){}
    double area()override{
        return 3.14*radius*radius;
    }
    void display(){
        cout<<"area of the circle:"<<area()<<endl;
    }
};
class rectangle:public shape{
    int length;
    int breadth;
    public:
    rectangle(int l,int b):length(l),breadth(b){}
    double area()override{
        return length*breadth;
    }
    void display(){
        cout<<"area of rectangle:"<<area()<<endl;
    }
};

int main(){
    circle c(2);
    c.display();
    rectangle r(2,3);
    r.display();
    return 0;
}