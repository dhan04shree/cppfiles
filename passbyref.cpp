#include<iostream>
using namespace std;
class Total{
    int n;
    public:
    void getdata(void);
    void putdata(void);
    void add(Total &,Total &);

};
void Total :: getdata(void){
    cout<<"Enter Number: ";
    cin>>n;
}
void Total :: putdata(void){
    cout<<n<<endl;
}
void Total :: add(Total &x,Total &y){
    x.n = 10;
    y.n = 20 ;
    n = x.n + y.n;
}
int main(){
    Total r,s,result;
    r.getdata();
    s.getdata();
    r.putdata();
    s.putdata();
    result.add(r,s);
    result.putdata();

    return 0;
}