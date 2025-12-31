// Insert and delete elements in vector

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3};
    v.insert(v.begin()+1,10);
    v.erase(v.begin());
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}
