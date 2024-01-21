#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Student {
    int scores;
    public:
    void input();
    int calculateTotalScore();
    
};
void Student :: input(){
    cin>>scores;
}
int Student :: calculateTotalScore(){

    int counnt = 0;
    for(int i = 0;i<= 4;i++){
        
        counnt += scores ;
    }
    return (counnt) ;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n-1; i++){
        int total = s[i].calculateTotalScore(); 
        if(total > kristen_score){
            count++;
        }    
    }

    cout << count;
    return 0;
}