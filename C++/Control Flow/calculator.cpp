// Menu-driven calculator program

#include<iostream>
using namespace std;
int main(){
    int choice;
    double a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Menu:\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\nEnter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Sum: "<<a+b;
            break;
        case 2:
            cout<<"Difference: "<<a-b;
            break;
        case 3:
            cout<<"Product: "<<a*b;
            break;
        case 4:
            if(b!=0) cout<<"Quotient: "<<a/b;
            else cout<<"Division by zero not allowed";
            break;
        default:
            cout<<"Invalid choice";
    }
    return 0;
}
