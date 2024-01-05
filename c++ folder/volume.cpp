// Volume function Overloading 
#include<iostream>
using namespace std;
int main(){
    // calculate the volume of cylinder
    int volume(double r,int h){
        return(3.14*r*r*h);}
        // calculate the volume of cube
        int volume(int a){
            return(a*a*a);}
            // rectangular box
            int volume(int l,int b,int h){
                return(l*b*h);}
            }
    cout<<"the volume of cuboid of 3,7 and 6"<<volume(3,7,6)<<endl;
    cout<<"the volume of cylinder of radius 3 and height 6 is"<<volume(3,6)<<endl;
    cout<<"the volume of cube of side 3 is"<<volume(3)<<endl;
    return 0;
