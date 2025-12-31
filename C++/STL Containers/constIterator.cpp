// Const iterator example

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3};
    for(vector<int>::const_iterator it=v.cbegin();it!=v.cend();it++){
        cout<<*it<<" ";
    }
    return 0;
}
