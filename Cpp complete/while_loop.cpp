//While loop
// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//       cout<<i;
//       i=i+1;
//   }
// }

//Sum from 1 to N
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int sum=0;
//     while(i<=n){
//          sum =sum + i;
//         i+=1;
//     }
//     cout<<sum;
// }

Prime number
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    int count =0;
    while(i<=n){
        if(n%i==0){
            count++;
        }
        i=i+1;
    }
    if(count==2){
        cout<<"prime number";
    }
    else{
        cout<<"not prime";
    }
}
