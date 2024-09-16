#include<bits/stdc++.h>

//Pairs
//Pair is used to combine together two values that may be of different data types. Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples. The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 

// using namespace std;
// void explainPair(){
//     pair<int,int> p= {1,3};
//     cout << p.first << " " << p.second;
    
//     //Nested pair
//     pair <int ,pair<int,int>> p= {1,{2,3}};
//     cout<< p.first <<" "<< p.second <<" " << p.second.first;
    
//     //Array of pair
    
//     pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
//     cout << arr[1].second;
// }
int main(){
    
    return 0;
}

//Vectors
//vectors are dynamic in nature (you can change their size unlike arrays)
void explainVector(){
    vector<int> v; //creating an empty vector
    
    v.push_back(1); //push 1 in empty vector
    v.emplace_back(2); //it also push 2 in vector (faster than push                   back) 
    
    //defining vectors using pairs
    
    vector <pair<int,int>> vec;
    
    v.push_back({1,2});
    v.emplace_back(1,2);
    
    vector<int>v(5);
    
    vector<int> v1(5,20);
    vector<int>v2(v1);//v2 will be carrying copy of v1
    
    
    //iterators
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) <<" ";
    
    it=it + 2;
    cout << *(it) << " ";
    
    vector<int>::iterator it =v.end(); //points right after the end                                  element
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();
    
    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";
    
    
    for ( vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *(it) <<" ";
    }
    for(auto it = v.begin(); it!=v.end(); it++){//auto directly assign data type;
    }
    
    for(auto it : v){//for each loop
        cout << it << " ";
    }
    
    //{10,20,12,23}
    v.erase(v.begin()+1);
    
    //{10,20,12,23,35}
    v.erase(v.begin()+2 ,v.begin()+4); // // {10,20,35}

    //Insert function

    vector<int>v(2,100); // {100,100}
    v.insert(v.begin(), 300) ;// {300,100,100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}
    
    victor<int> copy(2, 50); //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100                                               ,100}
    //{10,20}
    cout << v.size();//2
    
    // v1 -> {10, 20}
    // v2 -> {20, 40}
    v1.swap(v2); //v1 -> {30,40} , v2 -> {10,20}
    
    v.clear(); //erse the entire vector
    
    cout << v.empty(); //ture if empty , False if not empty
}
