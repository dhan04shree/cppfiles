#include<iostream>
using namespace std;
class student {
    int id ,roll;
    public:
    student(int,int);
    student(){}

};
student :: student(int n,int r){
    id = n;
    roll = r;
    cout<<n<<endl<<r<<endl;

}
int main(){
    student s1;
    student s(10,20);

    return 0;
}