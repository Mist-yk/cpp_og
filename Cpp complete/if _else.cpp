// Even or oddd number
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<"Even number"<<endl;
//     }
//     else{
//         cout<<"odd number"<<endl;
//     }
// }

// else if
#include <iostream>
using namespace std;

int main(){
    int marks;
    cin>>marks;
    
    if(marks >= 85 && marks <= 100){
        cout<<"Grade A"<<endl;
    }
    else if(marks >= 75 && marks <= 84){
        cout<<"Grade B"<<endl;
    }
    else{
        cout<<"Grade C"<<endl;
    }
}