//Hashing
#include<bits/stdc++.h>
using namespace std;
//number hashing
int main(){
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin >>arr[i];
    // }
    // //precompute
    // int hash[13] = {0};
    // for(int i=0; i<n; i++){
    //     hash[arr[i]] +=1;
    // }
    
    // int q;
    // cin >> q;
    // while(q--){
    //     int num;
    //     cin >> num;
    //     //fetch
    //     cout << hash[num] <<endl;
    // }

//character hashing
// string s;
// cin>>s;

// //precompute
// int hash[26] ={0};
// for(int i=0; i<s.size(); i++){
//     hash[s[i]-'a']++; //indexing
// }

// int q;
// cin >> q;
// while(q--){
//     char c;
//     cin >> c;
//     //fetch
//     cout << hash[c-'a']<< endl;
// }

int n;
cin >> n;
int arr[n];
for(int i=0; i<n; i++){
    cin >> arr[i];
}
//precompute
map<int, int>mpp;
for(int i=0; i<n; i++){
    mpp[arr[i]]++;
}
int q;
cin >> q;
while(q--){
    int num;
    cin >> num;
    cout<<mpp[num]<<endl;
}
    
    return 0;
}