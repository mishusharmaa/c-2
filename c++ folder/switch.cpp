// Switch Case
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    switch(age)
    {
        case 18:
        cout<<"you are 18"<<endl;
        break;
        case 21:
        cout<<"you are 21"<<endl;
        break;
        case 24:
        cout<<"you are 24"<<endl;
        break;
        case 2:
        cout<<"you are 2"<<endl;
        break;
        default:
        cout<<"no special cases"<<endl;
        break;
    }
}