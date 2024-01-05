// Structure
#include<iostream>
using namespace std;

    struct employee{
        int eid;
        char favchar;
        float salary;
    };
        int main(){
            struct employee mishu;
            mishu.eid=1;
            mishu.salary=12000;
            mishu.favchar='c';
            cout<<"the value is"<<mishu.eid<<endl;
            cout<<"the value is"<<mishu.salary<<endl;
            cout<<"the value is"<<mishu.favchar<<endl;
            return 0;
        } 
    
