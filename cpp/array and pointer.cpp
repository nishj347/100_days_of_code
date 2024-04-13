//Author : nishj347 @github
#include <iostream>
using namespace std;

class shop{
float id;
float price;
public:
void setdata(float id,float price){
  this->id=id;
  this->price=price;
}
void getdata(){
  cout<<"the id of this item is "<<id<<endl;
  cout<<"the price of this item:"<<price<<endl;
}
};

int main() {
  float id;
  float price;
  int size=3;
  shop *ptr=new shop[size];
  shop *ptrtemp=ptr;
  for(int i=0;i<size;i++){
  cout<<"enter the id of item"<<i+1<<endl;
    cin>>id;
    cin>>price;
    ptr->setdata(id,price);
    ptr++;
  }
  for(int i=0;i<size;i++){
    ptrtemp->getdata();
    ptrtemp++;
  }
  return 0;
}
