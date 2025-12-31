// Demonstrate pass by reference

#include<iostream>
using namespace std;
void increment(int &x){
    x = x + 1;
    cout<<"Inside function: "<<x<<endl;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    increment(num);
    cout<<"Outside function: "<<num;
    return 0;
}
