#include<iostream>
#include<conio.h>
using namespace std ;
class number {
    static int num;
    public:
    void getdata(){
        cout<<"Enter number : ";
        cin>>num;
    }
    void display(){
        cout<<"number : "<<num<<endl;
    }

};
int number :: num = 5 ;
int main(){
    number x,y,z;
    x.display();
    y.display();
    z.display();
    getch();
    x.getdata();
    y.getdata();
    z.getdata();
    cout<<"After entering data : "<<endl;
    x.display();
    y.display();
    z.display();
    return 0;
}