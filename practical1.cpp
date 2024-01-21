#include<iostream>
#include<string.h>
using namespace std ;
class student ;
class person{
    char name[20],dob[20],bg[20],contact[20],phone[20],lincense[20];
    public :
    person(){
        strcpy(name,"dhanshree");
        strcpy(dob,"dd/mm/yyyy");
        strcpy(bg,"O+ve");
        strcpy(contact,"5676886686");
        strcpy(phone,"3455");
        strcpy(lincense,"3436375");   
    }
    friend student ;
};
class student{
    int rollno ;
    char div[10];
    public :
    student(){

    }
    student(person *p){
        cout<<"Enter Details of student"<<endl;
        cout<<"Name\tRoll No\tDOB\tBloodGroup\tDiv\tContact\tPhone\tLincense"<<endl;
        cin>>p->name;
        // cout<<"\t";
        cin>>rollno ;
        // cout<<"\t";
        cin>>p->dob;
        // cout<<"\t";
        cin>>p->bg;
        // cout<<"\t";
        cin>>div;
        // cout<<"\t";
        cin>>p->contact;
        // cout<<"\t";
        cin>>p->phone;
        // cout<<"\t";
        cin>>p->lincense;

        
    }
    //  void getdata(){

    //  }
};
int main(){
    person d ;
    student s(&d) ;

    


}
