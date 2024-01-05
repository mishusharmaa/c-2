//function Overloading
#include<iostream>
using namespace std;
int sum(float a,int b){
    cout<<"using function with 2 argument"<<endl;
    return a+b;}
    int sum(int a,int b,int c){
        cout<<"using function with 3 argument"<<endl;
        return a+b+c;}
    

int main(){
    cout<<"the sum of 3,6 is"<<sum(3,6)<<endl;
    cout<<"the sum of 3,7,6 is"<<sum(3,7,6)<<endl;
    return 0;
}