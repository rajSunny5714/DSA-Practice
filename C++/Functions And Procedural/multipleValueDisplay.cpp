// Function returning multiple values using references

#include<iostream>
using namespace std;
void calculate(int a,int b,int &sum,int &product){
    sum=a+b;
    product=a*b;
}
int main(){
    int x,y,sum,product;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    calculate(x,y,sum,product);
    cout<<"Sum: "<<sum<<endl;
    cout<<"Product: "<<product;
    return 0;
}
