// Object and Class: Implement a C++ program to define a class named Student with
// attributes and methods, and create an object to access them.

#include <iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll_no;
    public:
    student(string n,int r):name(n),roll_no(r){}
    void display(){
        cout<<"name of the student:"<<name<<endl;
        cout<<"roll number of the student:"<<roll_no<<endl;
    }
};

int main(){
    student s("dhara",223);
    s.display();
    return 0;
}