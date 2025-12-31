// Demonstrate assignment operators using cin and cout
#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter value of a: ";
cin>>a;
cout<<"Enter value of b: ";
cin>>b;
    a=b;
    cout<<"After = : "<<a<<endl;
    a+=b;
    cout<<"After += : "<<a<<endl;
    a-=b;
    cout<<"After -= : "<<a<<endl;
    a*=b;
    cout<<"After *= : "<<a<<endl;
    a/=b;
    cout<<"After /= : "<<a<<endl;
    a%=b;
    cout<<"After %= : "<<a<<endl;
    return 0;
}
