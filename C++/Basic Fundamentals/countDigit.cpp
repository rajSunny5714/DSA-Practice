// Count digits in a number

#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter a number: ";
    cin>>num;
    int temp=num;
    if(num==0) count=1;
    while(temp!=0){
        temp/=10;
        count++;
    }
    cout<<"Number of digits in "<<num<<" is "<<count;
    return 0;
}
