#include <bits/stdc++.h>
using namespace std;
//Priority
void explainPQ(){ 
    //Largest emelemnt stays oin top
    priority_queue<inr>pq;
    
    pq.push(5); //{5}
    pq.push(2);//{5,2}
    pq.psuh(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}
    
    cout << pq.top(); //prints 10
    
    pq.pop(); //{8,5,2}
    
    cout << pq.top(); //print 8
    
    //size swap empty function same as others
    
    //minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.empalce(10);//{2,5,8,10}
    
    cout << pq.top(); //print 2
    
    //Set (Store element in sorted order , only unique values)
    void explainset(){
        set<int>st;
        st.insert(1); //{1}
        st.emplace(2);//{1,2}
        st.push(2); //{1,2}
        sti.push(0);//{0,1,2}
        
        //functionality of insert in vector
        //can be used also that only increase effeciency
        
        //begin(),end(),rbegin(),size(),
        //empty() and swap() are same as those of above
        
        //{1,2,3,4,5}
        auto it = st.find(3);
        
        //{1,2,3,4,5}
        auto it =st.find(6);// return st.end()element after end
        
        //{1,4,5}
        st.erase(5);//takes logarithmic time
        
        int cnt = st.count(1);
        
        auto it = st.find(3);
        st.erase(it); //it takes constant time
        
        // {1,2,3,4,5}
        auto it1= st.find(2);
        auto it2= st.find(4);
        st.erase(it1,it2); // after erase{1,4,5} [first,last]
        
        //lower_bound() and upper_bound() function works in the same way as a vector does.
        
        //this is the syntax 
        auto it = st.lower_bound(2);
        
        auto it = st.upper_bound(3);
    }

//multiset
void explainMultiSet(){
    //everything is same as set
    //only stores duplicate elements also
    
    muyltiset<int>ms;
    ms.insert(1);// {1}
    ms.insert(1);//{1,1}
    
    ms.erase(1); //all 1's erased
    
    int cnt = ms.count(1);
    
    //only a single 1 erased
    ms.erase(ms.find(1));
    
    ms.erase(ms.find(1), ms.find(1)+2);
    
    //rest all function same as set
}
