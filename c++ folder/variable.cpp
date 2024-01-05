// Variable Scope
#include<iostream>
using namespace std;

int glo=6;
void sum(){
    int a;
    cout<<glo;}
int main(){
    int glo=9;
    glo=78;
    int a=12, b=16;
    float pi=3.19;
    char c='b';
    bool is_true=false;
    sum();
    cout<<glo<<is_true;
    return 0;
}

