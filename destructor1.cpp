#include<iostream>
#include<conio.h>
using namespace std;
class student{
    char name[20],add[20];
    int roll, zip;
    public:
    student();
    ~student();
    void read();
    void disp();
};

student :: student(){
    cout<<"Student Details"<<endl;
}
void student :: read(){
    cout<<"Enter Student Name : "<<endl;
    cin>>name;
    cout<<"Enter Student Roll no : "<<endl;
    cin>>roll;
    cout<<"Enter Student Address : "<<endl;
    cin>>add;
    cout<<"Enter Student pincode : "<<endl;
    cin>>zip;
}
void student :: disp(){
    cout<<endl<<"Student Name : "<<name<<endl;
    cout<<"Roll no : "<<roll<<endl;
    cout<<"Address :"<<add<<endl;
    cout<<"Zipcode : "<<zip<<endl; 
}
student :: ~student(){
    cout<<"\nStudent Details is closed and related  object destroyed "<<endl;
}

int main(){
    {
        student s1 ;
        s1.read();
        s1.disp();
    }
    getch();
    student s2 ;
    s2.read();
    s2.disp();
    getch();
//destuctor will destroy both s1 and s2 object
    return 0;
}