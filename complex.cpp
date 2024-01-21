#include<iostream>
using namespace std;
class complex
{
    int real , img ;
    public :
    complex(){
        real = 0 ;
        img = 0 ;
    }
    complex(int r,int i){
        real = r;
        img = i ;

    }
    void display(int r,int i){
        cout<<r<<"+"<<i<<"i"<<endl;
    }

    int operation(complex,complex);

};
int complex :: operation(complex c1, complex c2)
 {
    
    int realpart;
    realpart = c1.real + c2.real ;
    int imgpart ;
    imgpart  = c1.img+ c2.img ;
    cout<<"Addition = ";
    cout<<realpart<<" + "<< imgpart <<"i"<<endl;
    int a,b;
    a = (c1.real * c2.real)-(c1.img * c2.img) ;
    b = (c1.real * c2.img) +(c1.img * c2.real);
    cout<<"Multiplication = ";
    cout<<a<<" + "<<b<<"i"<<endl;

    return 0 ;
 }
int main(){
    complex obj,sum;
    complex c1(1,2);
    complex c2(3,4);
    c1.display(1,2);
    c2.display(3,4);
    int result;
    result = sum.operation(c1,c2);
    cout<<result<<endl;
    
    //sum.display(3,2);
    return 0;



}