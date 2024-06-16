#include <iostream>
#include<fstream>
using namespace std;
int main(){
    string str1;
    ifstream in("demo.txt");
    in>>str1;
    cout<<str1;
   
    return 0;

}
