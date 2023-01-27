#include<iostream>
using namespace std; 

class student{
    string passcode;
    public:
    string name;
    int id;

    student(){

    }
    student(string pss, string n, int i){
        name = n;
        i = id;
        passcode = pss;

    }
    void into(){
        cout<<"My name is "<<name<<" , my id is"<<id<<"password is "<<passcode<<endl;
    }
    void setPass(string s){
        passcode = s;
    }
};

int main(){
    student s1;
    student s2("10","Mohit",1);

    int a =10;
    int*ptr = &a;
    student*ptrs = &s2;

    cout<<(*ptrs).name<<endl;

    return 0;
}