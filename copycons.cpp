#include<iostream>
using namespace std ;
class student{
    int roll ;
    int mark;
    public:
    student(int m,int n){
        roll = m;
        mark = n;
    }
        student(student &t);

    void showdata(){
        cout<<roll<<endl;
        cout<<mark<<endl;
    }
    

};
student :: student(student &t){
    roll = t.roll;
    mark = t.mark;
}

int main(){
    cout<<"parameterized constructor "<<endl;
    student o(10,20);
    o.showdata();
    cout<<"copy constructor output"<<endl;
    //data inside object o is copied into object t 
    student t(o);
    t.showdata();

    return 0;
}