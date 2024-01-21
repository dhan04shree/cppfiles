#include<iostream>
using namespace std ;
class sum {
    int a,b;
    friend void add(sum s);
};
void add(sum s){
    s.a = 10;
    s.b = 20 ;
    int temp = s.a + s.b ;
    cout<<s.a<<"\n"<<s.b<<endl;
    cout<<temp;

}
int main(){
    sum x;
    add(x);

}