// Deque container example

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_front(10);
    d.push_back(20);
    for(int i:d){
        cout<<i<<" ";
    }
    return 0;
}
