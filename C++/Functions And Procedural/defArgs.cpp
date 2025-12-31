// Function with default arguments

#include<iostream>
using namespace std;
void display(int a=10,int b=20){
    cout<<"Values are "<<a<<" and "<<b;
}
int main(){
    display();
    cout<<endl;
    display(5);
    cout<<endl;
    display(5,15);
    return 0;
}
