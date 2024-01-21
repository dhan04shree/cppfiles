#include<iostream>
using namespace std ;
class student{
    int id;
    int roll;
    public:
    student();
    void putdata(){
        cout<<"ID : "<<id<<endl;
        cout<<"ROLL : "<<roll<<endl;
        
    }
    student(){
        
        cout<<"Enter id :";
        cin>>id ;
        cout<<"Enter roll :";
        cin>>roll;
       
    }
};

int main(){
    student s;
    s.putdata();
    return 0;
}