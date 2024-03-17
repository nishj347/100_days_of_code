//Author : nishj347 @github
//multilevel inheritance
#include <iostream>
#include <string>
using namespace std;
class student{
    protected:
    int rollno;
    string name;
    public:
    void setdata(int r, string n){
        rollno=r;
        name=n;
        }
    void getdata(){
        cout<<"the roll no.is:"<<rollno<<endl;
        cout<<"the name is:"<<name<<endl;
    }    
};
class exam:public student{
    protected:
    float maths;
    float physics;
    public:
    void setmarks(float m,float p){
        maths=m;
        physics=p;
    }
    void getmarks(){
        cout<<"the marks in maths:"<<maths<<endl;
        cout<<"the marks in physics:"<<physics<<endl;
        
    }
};
class result:public exam{
    float percentage;
    public:
    void getresult(){
        cout<<"the resuult is:"<<(maths+physics)/2<<endl;
    }
};
int main() {
    result nish;
    nish.setdata(34,"dhara");
    nish.getdata();
    nish.setmarks(90.7 , 67.8);
    nish.getresult();
    


    return 0;
}
