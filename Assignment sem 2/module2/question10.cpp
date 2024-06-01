// Class Definition: Define a class Car with attributes like model, year, and price, and
// methods to display these attributes
#include<iostream>
#include<string>
using namespace std;
class car{
    string model;
    int year;
    double price;
    public:
    car(string m,int y,double p):model(m),year(y),price(p){}
    void display(){
        cout<<"the model of the car:"<<model<<endl;
        cout<<"the year of this brand:"<<year<<endl;
        cout<<"the price of this car:"<<price<<endl;
    }
};
int main(){
    car c("porsche 911",1963,4.26);
    c.display();
    return 0;
}