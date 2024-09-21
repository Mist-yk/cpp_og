//Recursion
//Reverse array
#include <iostream>
using namespace std;
// void reverse_array(int i, int arr[], int n){
//     if(i >= n/2) return ;
//     swap(arr[i], arr[n-i-1] );
//     reverse_array(i+1);
// }

// int main(){
//      int n;
//      cin >> n;
//      int arr[n];
//      for(int i=0; i<n; i++);
//      reverse_array(0, arr , n);
//      for(int i=0; i<n; i++) cout << arr[i] << " ";
//      return 0;
// }

//Palindrome
bool palin(int i ,string &s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size-i-1]) return false;
    return palin(i+1, s);
    
}
int main(){
    string s = "madam";
    cout << palin(0,5);
    return 0;
}