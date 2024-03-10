//Author : nishj347 @github
#include <iostream>
using namespace std;

class complex{
    private:
    int real;
    int img;
    public:
    void input(){
        cout<<"the value of real and imaginary part:";
        cin>>real;
        cin>>img;
    }

    complex operator + (complex obj){
        complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }

    void display(){
        cout<<"the sum is:"<<real<<"+"<<img<<"i";
    }
};

int main() {
    complex c1,c2,res;
    cout<<"first number:/n";
    c1.input();
    cout<<"second number:/n";
    c2.input();

    res=c1+c2;
    res.display();

    return 0;

}
