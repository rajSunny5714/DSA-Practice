// Map insertion and traversal

#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="A";
    m[2]="B";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
