// Author : nishj347 @github
#include <iostream>
using namespace std;
int main() {
int num;
int denum;

cout<<"enter the numerator:";
cin>>num;
cout<<"enter the denominator:";
cin>>denum;

try{
    if (denum==0){
        throw 0;
        }
    else{
       cout<<"the result:"<<num/denum;
    }
}
catch(int e ){
    cout<<"exception:division by zero"<<endl;
  
    
}
return 0;
}
