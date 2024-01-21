#include<iostream>
using namespace std;
//constructor overloading
class student{
    int roll;
    int mark;
    public:
    student();
    student(int);
    student(int,int);
    void show(void);
}; 
student :: student(){
    roll = 3;
    mark = 8;
}
student :: student(int a){
    roll=mark = a;
}

student :: student(int x,int y){
    roll =x;
    mark =y;
}
void student :: show(){
    cout<<"roll :"<<roll<<endl;
    cout<<"mark :"<<mark<<endl;
}
int main(){
    // student stu,stu1(6),stu3(4,5);
    //2nd method for writing object 
     student stu,stu1,stu3 ;

       stu1 = student(6);
       stu3 = student(3,4);
    stu.show();
    stu1.show();
    stu3.show();




}
