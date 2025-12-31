// Demonstrate goto statement

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0){
        goto negative;
    }
    cout<<"Number is non-negative"<<endl;
    return 0;
    negative:
    cout<<"Number is negative";
    return 0;
}
