// Function to check palindrome string

#include<iostream>
using namespace std;
bool isPalindrome(string str){
    int n=str.length();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-1-i]) return false;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    if(isPalindrome(s)) cout<<s<<" is a palindrome";
    else cout<<s<<" is not a palindrome";
    return 0;
}
