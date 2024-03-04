//write a code for displaying coordinates and distance from orgins of two points
//Author: nishj347 @github
#include <iostream>
#include <cmath>
using namespace std;
void display(double x, double y){
  cout << "x: " << x << endl;
  cout<<"y: "<<y<<endl;
}

double distance(double x, double y){
  return sqrt(x*x+y*y);
}
int main(){
  double x;
  double y;


  cout<<"enter the x co-ordinate"<<endl;
  cin>>x;

  cout<<"enter the y coordinate= "<<endl;
  cin>>y;
  display(x,y);

  cout<<"distance from origin= "<<distance(x,y)<<endl;
 return 0;
  
}
