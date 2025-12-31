// Remove duplicates using set

#include<iostream>
#include<set>
using namespace std;
int main(){
    int arr[]={1,2,2,3};
    set<int> s(arr,arr+4);
    for(int i:s){
        cout<<i<<" ";
    }
    return 0;
}
