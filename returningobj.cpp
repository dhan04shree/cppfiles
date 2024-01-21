#include<iostream>
using namespace std ;
class sum {
    int a,b;
    public:
    void getdata(void);
    void putdata(void);
    sum add(sum);
};
void sum ::getdata(void){
    cout<<"Enter two number for addition :  ";
    cin>>a>>b;
}
void sum :: putdata(void){
    cout<<a<<endl;
}
sum sum ::add(sum x){
    sum h ;
    h.a = x.a + x.b ;
    return (h) ;
}
int main(){
    sum z,v,c,r;
    z.getdata();
    r = c.add(z);
    r.putdata();

    
    return 0;
}