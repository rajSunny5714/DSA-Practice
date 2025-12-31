// Static variable inside a function

#include<iostream>
using namespace std;
void counter(){
    static int count=0;
    count++;
    cout<<"Counter: "<<count<<endl;
}
int main(){
    for(int i=0;i<5;i++){
        counter();
    }
    return 0;
}
