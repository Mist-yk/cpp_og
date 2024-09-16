#include <bits/stdc++.h>
using namespace std;
void explainList() {
    list<int> ls;
    
    ls.push_back(2); //{2}
    ls.emplace_back(4); // {2,4}
    
    ls.push_front(5); //{5,2,4}
    
    ls.emplace_front(); {2,4};
}

void explainDeque(){
    
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    
    dq.pop_back();
    dq.pop_front();
    
    dq.back();
    
    dq.front();
}
//Stack (LIFO)
void expainStack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.emplace(5); //{5,3,2,1}
    
    cout << st.top(); //prints 5 "** st[2] is invalid **" //print                  top element
    
    st.pop(); //st looks like {3,2,1}
    
    cout << st.top(); //3
    
    cout << st.size(); //4
    
    cout << st.empty(); //false
    
    stack<int>st1, st2;
    st1.swap(st2);
}

//Queue (FIFO)
void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}
    
    q.back() +=5
    
    cout << q.back(); //prints 9
    
    //Q is {1, 2, 9}
    cout << q.front(); //prints 1
    
    q.pop(); //{2,9}
    
    cout << q.front(); // prints 2
    
    //size swap empty same as stack
}
int main(){
    
}
