// Iterate vector using iterator

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={5,10,15};
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}
