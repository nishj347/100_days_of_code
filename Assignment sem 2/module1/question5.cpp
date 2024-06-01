/*Inheritance: Create a base class Animal with a method sound() and derive classes Dog
and Cat that override the sound() method*/
#include <iostream>
using namespace std;
class animal{
    public:
    virtual void sound(){}
};
class dog:public animal{
    public:
    void sound()override{
        cout<<"bark..bark.."<<endl;
    }
};
class cat:public animal{
    public:
    void sound()override{
        cout<<"meow..meow"<<endl;
    }
};

int main(){
    animal *a1=new dog;
    animal *a=new cat;
    a->sound();
    a1->sound();

    return 0;
}
