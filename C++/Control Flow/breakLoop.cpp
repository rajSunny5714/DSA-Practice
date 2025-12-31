// Use break to exit loop

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter numbers (enter 0 to exit): ";
    while(true){
        cin>>num;
        if(num==0){
            cout<<"Loop exited using break";
            break;
        }
        cout<<"You entered: "<<num<<endl;
    }
    return 0;
}
