#include<iostream>
using namespace std ;
// All the member function of one class as the friend of another class
class dell;
class logitech{
    int product ;
    friend dell;
};
class dell{
    public :
    void lappy(){
        logitech a;
        a.product = 10 ;
        cout<<a.product <<endl;
    }
    void keybo();
};
void dell :: keybo(){
    logitech b;
    b.product = 20;
    cout<<b.product<<endl;
}
int main(){
    dell y;
    y.lappy();
    y.keybo();
    return 0 ;
}