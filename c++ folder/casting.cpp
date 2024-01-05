//type casting
#include<iostream>
using namespace std;
int main(){
    int a=42;
    float b=42.40;
    cout<<"the value of a is"<<(float)a<<endl;
    cout<<"the value of a is"<<float (a)<<endl;
    cout<<"the value of b is"<<(int)b<<endl;
    cout<<"the value of b is"<<int (b)<<endl;
    int c=int(b);
    cout<<"the expresion is"<<a+b<<endl;
    cout<<"the expression is"<<a+int(b)<<endl;
    cout<<"the expression is"<<a+(int)b<<endl;
    }
