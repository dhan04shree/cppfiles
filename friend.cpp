#include<iostream>
using namespace std ;
class sum {
    int a, b;
    public:
    void putdata();
    friend void add(void);
    friend sum sub(sum);

}; 
void add(void){
    sum s;
    int temp;
    s.a = 10;
    s.b = 20 ;
    temp = s.a + s.b ;
    cout<<s.a<<endl<<s.b<<endl;
    cout<<temp<<endl;
}
sum sub(sum g){
    sum s1,temp1 ;
    s1.a = 10;
    s1.b = 20 ;
    temp1.a = s1.a - s1.b ;
    cout<<s1.a<<endl<<s1.b<<"\n";
    return temp1 ;

}
void sum :: putdata(){

    cout<<a<<endl;
}

int main(){
    add();
    //returning object inside friend function of class sum
    sum z,result;
    result = sub(z);
    /*return value is object so that's why we cannot cout diectly in intmain 
    uske liye we have make another function for putdata 
    */
   result.putdata();



    return 0;
}