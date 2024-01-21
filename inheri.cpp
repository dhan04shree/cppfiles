#include<iostream>
using namespace std;
class A {
    int m;
    public :
    void getdata_m(void);
    int retuM(void);

};
class B : public A{
    int n ,sum;
    public:
    void getdata_n(void);
    int add(void);
    void display();

};
void A :: getdata_m(){
    cout<<"Enter value of m : ";
    cin>>m;
}
int A :: retuM(){
    return (m);
}
void B ::getdata_n(){
    cout<<"Enter value of n : ";
    cin>>n;

}
int B :: add(){
    sum = retuM() + n; //here we cannot write direct m bcz m is private 
    return (sum);
}
void B :: display(){
    cout<<"Value of m is "<<retuM()<<endl;
    cout<<"Value of n is "<<n<<endl;
    cout<<"Sum "<<sum<<endl;

}
int main(){
    B num;
    num.getdata_m();
    num.getdata_n();
    num.add();
    num.display();
    return 0;
}
