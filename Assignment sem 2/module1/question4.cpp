// Encapsulation: Implement a class Employee with private data members and public
// member functions to get and set the data
#include<iostream>
#include<string>
using namespace std;
class employee{
    string name;
    int employee_id;
    public:
    void setname(string n){
        name=n;
    }
    void setid(int e){
        employee_id=e;
    }
    string getname(){
        return name;
    }
    int getid(){
        return employee_id;
    }
};

int main(){
    employee e;
    e.setname("dhara");
    e.setid(7777);
    cout<<"name of the employee:"<<e.getname()<<endl;
    cout<<"employee id is:"<<e.getid()<<endl;
    return 0;
}