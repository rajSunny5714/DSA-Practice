// Demonstrate bitwise operators with messages
#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
    if((a&b)>0){
        cout<<"Bitwise AND result is non-zero"<<endl;
    }else{
        cout<<"Bitwise AND result is zero"<<endl;
    }
    if((a|b)>0){
        cout<<"Bitwise OR result is non-zero"<<endl;
    }else{
        cout<<"Bitwise OR result is zero"<<endl;
    }
    if((a^b)>0){
        cout<<"Bitwise XOR result is non-zero"<<endl;
    }else{
        cout<<"Bitwise XOR result is zero"<<endl;
    }
    cout<<(a<<1)<<endl;
    cout<<(b>>1)<<endl;
    return 0;
}
