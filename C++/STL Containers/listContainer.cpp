// List container example

#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l={1,2,3};
    l.push_back(4);
    for(int i:l){
        cout<<i<<" ";
    }
    return 0;
}
