// Dynamic Binding: Create a base class Base with a virtual function show() and a derived
// class Derived that overrides show(). Use pointers to demonstrate dynamic binding
#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"this is show function"<<endl;
    }
};
class derived:public base{
public:
void show(){
    cout<<"this is the show function of derived class"<<endl;
}
};
int main(){
    base *b=new derived;
    b->show();
    return 0;
}
// base *bptr;
// derived d;                       this is another method for the same
// bptr = &d;   
// bptr->show();

