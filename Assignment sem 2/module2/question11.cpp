// Local and Global Class: Implement a local class within a function and a global class in
// the same program and demonstrate their usage.
#include <iostream>
using namespace std;
class global{
    public:
    void display(){
        cout<<"a global class"<<endl;
    }
};
void localfunction(){
    class local{
        public:
        void display(){
        cout<<"a local class"<<endl;
    }
};
local obj;
obj.display();
}

int main(){
    global g;
    g.display();
    localfunction();
    return 0;
}