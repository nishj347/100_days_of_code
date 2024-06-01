/*Polymorphism: Write a program to demonstrate function overloading with a class Math
that has multiple add methods.*/
#include <iostream>
using namespace std;
class math{
    int a,b,c;
    public:
    math(int a,int b,int c):a(a),b(b),c(c){}
    double sum(int a,int b){
        return a+b;
    }
    double sum(int a,int b,int c){
        return a+b+c;
    }
};

int main(){
    math *m=new math(2,3,4);
    cout<<m->sum(4,7)<<endl;
    cout<<m->sum(2,3,4)<<endl;
    return 0;
}
