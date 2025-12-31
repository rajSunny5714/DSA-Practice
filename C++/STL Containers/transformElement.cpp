// Transform elements using STL

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int square(int x){
    return x*x;
}
int main(){
    vector<int> v={1,2,3};
    transform(v.begin(),v.end(),v.begin(),square);
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}
