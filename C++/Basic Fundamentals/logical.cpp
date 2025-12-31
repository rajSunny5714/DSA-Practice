// Demonstrate logical operators with messages
#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
    if(a>0&&b>0){
        cout<<"AND operator true"<<endl;
    }else{
        cout<<"AND operator false"<<endl;
    }
    if(a>0||b>0){
        cout<<"OR operator true"<<endl;
    }else{
        cout<<"OR operator false"<<endl;
    }
    if(!(a>b)){
        cout<<"NOT operator true"<<endl;
    }else{
        cout<<"NOT operator false"<<endl;
    }
    return 0;
}
