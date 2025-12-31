// Custom comparator for sorting

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool desc(int a,int b){
    return a>b;
}
int main(){
    vector<int> v={1,3,2};
    sort(v.begin(),v.end(),desc);
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}
