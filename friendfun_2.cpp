#include<iostream>
using namespace std ;
// A function friendly to two or more classes
class rahul {
    int a = 10;
    friend void add();
};
class rani {
    int b = 20 ;
    friend void add();
};
void add(){
    rahul x ;
    rani y;
    int temp ;
    temp = x.a + y.b ;
    cout<<temp<<endl;
}
int main(){
    rahul k;
    rani n;
    add();
    return 0;
}