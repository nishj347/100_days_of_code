#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    
    node(int data1,node* next1 = nullptr){
        data=data1;
        next=next1;

    }

};

int main(){
    vector<int>v={2,3,6,3,3};
    node*y= new node(v[1]);
    cout<<y->next;
    return 0;



}
