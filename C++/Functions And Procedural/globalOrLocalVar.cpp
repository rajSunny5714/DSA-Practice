// Global vs local variable example

#include<iostream>
using namespace std;
int x=100; // global variable
int main(){
    int x=50; // local variable
    cout<<"Local x: "<<x<<endl;
    cout<<"Global x: "<<::x;
    return 0;
}
