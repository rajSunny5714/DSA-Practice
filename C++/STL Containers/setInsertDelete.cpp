// Set insertion and deletion

#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.erase(10);
    for(int i:s){
        cout<<i<<" ";
    }
    return 0;
}
