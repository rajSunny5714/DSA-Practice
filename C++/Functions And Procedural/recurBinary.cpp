// Recursive binary search

#include<iostream>
using namespace std;
int binarySearch(int arr[],int l,int r,int key){
    if(r>=l){
        int mid=l+(r-l)/2;
        if(arr[mid]==key) return mid;
        if(arr[mid]>key) return binarySearch(arr,l,mid-1,key);
        return binarySearch(arr,mid+1,r,key);
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter sorted elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter key to search: ";
    cin>>key;
    int result=binarySearch(arr,0,n-1,key);
    if(result!=-1) cout<<"Element found at index "<<result;
    else cout<<"Element not found";
    return 0;
}
