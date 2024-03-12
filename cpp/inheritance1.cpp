//Author : nishj347 @github
#include <iostream>
using namespace std;

class a{
  
    public:
    int da;
    void inputa(int x){
        da=x;
    }
    void showa(){
        cout<<"the number is :"<<da<<endl;
    }
};

class b: public a{
  
    public:
    int db;
    void inputb(int x){
        db=x;
    }
    void showb(){
        cout<<"the db is:"<<db<<endl;
    }
};

int main() {
b obj;
obj.inputb(78);
obj.showb();
obj.inputa(67);
obj.showa();
    return 0;
}
