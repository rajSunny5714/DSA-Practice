// Function overloading (add floats)

#include<iostream>
using namespace std;
float add(float a,float b){
    return a+b;
}
float add(float a,float b,float c){
    return a+b+c;
}
int main(){
    float x,y,z;
    cout<<"Enter two float numbers: ";
    cin>>x>>y;
    cout<<"Sum of two numbers: "<<add(x,y)<<endl;
    cout<<"Enter three float numbers: ";
    cin>>x>>y>>z;
    cout<<"Sum of three numbers: "<<add(x,y,z);
    return 0;
}
