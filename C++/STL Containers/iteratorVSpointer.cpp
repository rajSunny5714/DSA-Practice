// Iterator vs pointer comparison

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3};
    int *p=&v[0];
    cout<<*p<<" "<<*v.begin();
    return 0;
}
