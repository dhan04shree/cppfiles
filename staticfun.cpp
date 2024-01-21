#include<iostream>
using namespace std;
class counter{
    static int count;
    int n;
    public:
    void setdata(){
        count++;
        n = count ;
    }
    void showvalueofn(){
        cout<<"The value of n is "<<n<<endl;
    }
    static void showcount(){
        cout<<"count : "<<count<<endl;
    }
};
int counter :: count ;
int main(){
    counter c1,c2,c3;
    counter :: showcount();
    c1.setdata();
    c2.setdata();
    counter :: showcount();
    c3.setdata();
    counter :: showcount();
    c1.showvalueofn();
    c2.showvalueofn();
    c3.showvalueofn();

   

    return 0;
}