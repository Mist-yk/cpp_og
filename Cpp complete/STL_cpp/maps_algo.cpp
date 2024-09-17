#include<bits/stdc++.h>
using namespace std;
//Map stores unique keys in sorted order
void explainMap{
     map<int, int> mpp; //first int is key and second is value
     map<int, pair<int, int> mpp;//first int key pair int values
     map< pair<int, int>, int> mpp;//pair is key int is value
     
     
     mpp[1] = 2;
     mpp.emplace({3, 1});
     
     mpp.insert({2, 4});
     
     mpp[{2,3}] = 10;
     {
         {1,2}
         {2,4}
         {3,1}
     }
     
     for(auto it : mpp){
         cout << it.first << " " << it.second << endl;
     }
     cout << mpp[1];
     cour << mpp[5];
     
     auto it = mpp.find(3);
     cout << *(it).second;
     
     auto it = map find(5);//if element does not exist return mpp                                                     .end()
}
bool comp( pair<int,int> p1,  pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //they are same
    if(p1.second > p2.second) return true;
    return false;
}
void explainExtra() {
    sort(a, a + n);
    sort(v.begin(), v.end());
    
    sort(a+2, a+4);
    
    sort(a, a+n, greater<int>);
    
    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};
    
    // sort it according to second element
    //if second element is same then sort
    // it according to first element but in descending
    
    sort(a, a+n ,comp)
    //{4,1}, {2,1}, {1,2};
    
    int num = 7;
    int cnt = __builtin_popcount();//return number of set bits(1)
    
    long long num = 16578657676;
    int cnt = __built_popcountll();
    
    string s = "123";
    
    do{
        cout << s << endl;
    }while(next_permutation(s.being(), s.end()));
    int maxi = *max_element(a,a+n);
}
int main(){
    
}