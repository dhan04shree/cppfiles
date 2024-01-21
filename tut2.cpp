#include<iostream>
#include<iomanip>
using namespace std;
int glo = 6; //global variable
void sum();
void sum(){
    cout<<glo<<endl;
}
int main(){
    float a = 4.567836;
    cout<<setprecision(2)<<a<<endl;
    int glo = 3; //local variable
    cout<<glo<<endl;
    sum();
    cout<<glo<<endl;
    


}
