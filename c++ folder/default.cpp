// Default argument
#include<iostream>
using namespace std;
inline int product(int a,int b){
    return a*b;
}
float moneyRecieved(int currentMoney,float factor=1.02){
return currentMoney*factor;}
int main(){
    int a,b;
    int main=10000;
    cout<<"if you have"<<Money<<"Rs in your back account,you will recieve"<< moneyRecieved(Money)<<"RS efter 1year"<<endl;
    cout<<"for vip: if you have"<<Money<<"Rs in your bank acount,you will recieve"<<moneyRecieved(Money,1.1)<<"Rs after 1year";
    return 0;

}