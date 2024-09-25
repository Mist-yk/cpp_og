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

// int n;
// cin >> n;
// int arr[n];
// for(int i=0; i<n; i++){
//     cin >> arr[i];
// }
// //precompute
// map<int, int>mpp;
// for(int i=0; i<n; i++){
//     mpp[arr[i]]++;
// }
// int q;
// cin >> q;
// while(q--){
//     int num;
//     cin >> num;
//     cout<<mpp[num]<<endl;
// }

//highest/lowest frequency element
    #include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {1, 2, 1, 2, 3, 4, 3, 1}; 
    unordered_map<int, int> mpp;

    //  Count frequencies
    for (int i = 0; i < 8; i++) {
        mpp[a[i]]++;
    }

    // Initialize variables for max and min frequency
    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    int maxEle = -1, minEle = -1;

    //  Find max and min frequency elements
    for (auto &e : mpp) {
        if (e.second > maxFreq) { //second is frequency
            maxFreq = e.second; // Update maximum frequency
            maxEle = e.first;   // Update the element with maximum frequency
        }
        if (e.second < minFreq) {
            minFreq = e.second; 
            minEle = e.first;   
        }
    }

   
    cout << "Element with highest frequency: " << maxEle << " (Frequency: " << maxFreq << ")\n";
    cout << "Element with lowest frequency: " << minEle << " (Frequency: " << minFreq << ")\n";

    return 0;
}










    
    
    return 0;
}
