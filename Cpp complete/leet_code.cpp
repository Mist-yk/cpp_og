//Binary and decimal number system

//Decimal to binary
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     int i=0;
    
//     while(n!=0){
//         int bit = n & 1;
//         ans =(bit *pow(10,i))+ans;
        
//         n=n>>1;
//         i++;
//     }
    
//     cout<<"Answer is :"<<ans<<endl;
    
    
// }

//Binary to decimal
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     int i=0, ans=0;
    
//     while(n !=0){
//         int digit=n%10;
        
//         if(digit == 1){
//             ans = ans + pow(2,i);
//         }
//         n=n/10;
//         i++;
//     }
//     cout<<"answer is:"<<ans<<endl;
// }

//Reverse integer
// #include <iostream>
// #include <limits.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     int ans =0;
//     while(n!=0){
//         int digit = n%10;
        
//         if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
//             cout<<"0";
//         }
//         ans =(ans *10)+digit;
//         n=n/10;
//     }
//     cout<<ans;
// }

//compliment base 10 int
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     int m=n;
//     int mask=0;
    
//     //edge case
//     if(n == 0){
//         cout<<1;
//     }
//     while(m!=0){
//         mask =(mask<<1) | 1;
//         m = m>>1;
//     }
//     int ans =(-n)&mask;
//     cout<<ans;
// }

//Power of two
#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
for(int i = 0; i<=30; i++){
    int ans =pow(2,i);

    if (ans == n){
        cout<<"true";
    }
}
        cout<<"false";

}