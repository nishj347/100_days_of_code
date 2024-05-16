// Author : nisj347 @github
#include <iostream>
#include <string>

using namespace std;

class Visitor {
private:
    string name;
    int visitornumber;
    string contact;
    static int visitors;

public:
  
    Visitor() {
       visitors++;
    }
    ~Visitor() {
        visitors--;
    }
    
    void getdetails(){
        cout<<"name:";
        cin>>name;
        cout<<"vistors number:";
        cin>>visitornumber;
        cout<<"contact:";
        cin>>contact;
    }
    
    void displaydetails() {
        cout << "Visitor name: " << name << endl;
        cout << "Visitor number: " << visitornumber << endl;
        cout << "Contact details: " << contact << endl;
    }

    static int getVisitors() {
        return visitors;
    }
};
int Visitor::visitors = 0;
int main() {
    Visitor v1,v2;

    cout << "Visitor details:" << endl;
    v1.getdetails();
    v2.getdetails();
    v1.displaydetails();
    v2.displaydetails();

    cout << "Total Visitors: " << Visitor::getVisitors() << endl;

    return 0;
}
