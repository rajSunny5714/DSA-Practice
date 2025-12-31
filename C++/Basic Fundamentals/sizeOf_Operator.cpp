// Demonstrate the use of sizeof operator
#include<iostream>
using namespace std;
int main(){
    int a;
    float b;
    double c;
    char d;
    cin>>a>>b>>c>>d;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d);
    return 0;
}