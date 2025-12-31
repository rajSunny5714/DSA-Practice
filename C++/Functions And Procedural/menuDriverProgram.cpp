// Menu-driven program using functions

#include<iostream>
using namespace std;
void add(double a,double b){ cout<<"Sum: "<<a+b<<endl; }
void subtract(double a,double b){ cout<<"Difference: "<<a-b<<endl; }
void multiply(double a,double b){ cout<<"Product: "<<a*b<<endl; }
void divide(double a,double b){ 
    if(b!=0) cout<<"Quotient: "<<a/b<<endl;
    else cout<<"Division by zero not allowed"<<endl;
}
int main(){
    int choice;
    double x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Menu:\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\nEnter your choice: ";
    cin>>choice;
    switch(choice){
        case 1: add(x,y); break;
        case 2: subtract(x,y); break;
        case 3: multiply(x,y); break;
        case 4: divide(x,y); break;
        default: cout<<"Invalid choice"; 
    }
    return 0;
}