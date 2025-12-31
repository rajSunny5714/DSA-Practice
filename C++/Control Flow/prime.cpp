// Check prime number using loop

#include<iostream>
using namespace std;
int main(){
    int num,flag=0;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<=1){
        flag=1;
    }else{
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<num<<" is a prime number";
    }else{
        cout<<num<<" is not a prime number";
    }
    return 0;
}
