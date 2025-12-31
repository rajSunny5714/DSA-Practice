// Sort a vector using sort()

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={4,1,3};
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}
