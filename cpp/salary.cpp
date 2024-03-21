//Author: nishj347 @github
#include <iostream>
using namespace std;
class employee{
    int sal;
    int no_of_days;
    public:
    employee(int sal=0,int no_of_days=0){
        this->sal=sal;
        this->no_of_days=no_of_days;
        
    }
        
    void getinfo(){
        cout<<"salary of the employee:"<<endl;
        cin>>sal;
        cout<<"no of days employee worked:"<<endl;
        cin>>no_of_days;
   
    }
    void addsal(){
        if (sal>500){
            cout<<"salary is :"<<sal+10;
        }
        else{
            cout<<"no increase in salary:"<<sal<<endl;
        }
    }
    void addwork(){
        if (no_of_days>6){
            cout<<"salary is:"<<sal+5;
            }
        else{
            cout<<"salary is same:"<<sal;
        }    
    }
};
int main() {
    employee e;

    e.getinfo();
    e.addsal();
    e.addwork();

    return 0;
}
