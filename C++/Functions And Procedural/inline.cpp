// Inline function example

#include<iostream>
using namespace std;
inline int square(int x){
    return x*x;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Square of "<<num<<" is "<<square(num);
    return 0;
}
