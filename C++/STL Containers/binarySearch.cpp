// Binary search using STL

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={1,2,3,4};
    if(binary_search(v.begin(),v.end(),3)){
        cout<<"Found";
    }
    return 0;
}
