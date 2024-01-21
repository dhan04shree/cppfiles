#include<iostream>
using namespace std ;
//member function of one class can be friend function of another class
class rahul {
    int hi;
    public :
    void disp();

};
class rani {
    int bye;
    public :
    friend void rahul :: disp();

};
void rahul :: disp(){
    rani ob1 ;
    rahul ob2 ;
    ob2.hi = 10 ;
    ob1.bye = 20;
    cout<<ob2.hi<<endl;
    cout<<ob1.bye<<endl;
}


int main(){
    rahul what;
    what.disp();
    return 0;

}