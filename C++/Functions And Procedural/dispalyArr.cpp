// Function returning array elements

#include<iostream>
using namespace std;
int* getArray(int n){
    static int arr[100];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    return arr;
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int* arr=getArray(n);
    cout<<"Array elements are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
