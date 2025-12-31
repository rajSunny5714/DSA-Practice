// Reverse a number using do-while

#include<iostream>
using namespace std;
int main(){
    int num,rev=0;
    cout<<"Enter a number: ";
    cin>>num;
    int temp=num;
    do{
        rev=rev*10 + temp%10;
        temp/=10;
    }while(temp!=0);
    cout<<"Reverse of "<<num<<" is "<<rev;
    return 0;
}
