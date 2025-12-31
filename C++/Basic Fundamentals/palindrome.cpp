// Check if a number is palindrome

#include<iostream>
using namespace std;
int main(){
    int num,rev=0;
    cout<<"Enter a number: ";
    cin>>num;
    int temp=num;
    while(temp!=0){
        rev=rev*10 + temp%10;
        temp/=10;
    }
    if(num==rev){
        cout<<num<<" is a palindrome";
    }else{
        cout<<num<<" is not a palindrome";
    }
    return 0;
}
