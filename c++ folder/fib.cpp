// Fibonacci recursion
#include<iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;}
        return fib(n-2)+fib(n-1);
    }
    int main(){
        int a;
        cout<<"enter a number"<<endl;
        cin>>a;
        cout<<"the term in fibonacci sequence at possition"<<a<<"is<<fib(0)"<<endl;
        return 0;

    }
