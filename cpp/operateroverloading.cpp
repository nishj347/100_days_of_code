//Author : nishj347 @github
#include <iostream>
using namespace std;

class increase{
    private:
    int value;
    public:
    increase(){
    value=10;
    }
    
    increase operator++(int){
    value=value+5;
    }
    
    void display(){
        cout<<"the increased value:"<<value<<endl;
    }
};

int main() {
    increase inc;
    inc++;
    inc.display();
    
    return 0;

}
