//For loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     for(int i=1;i<n;i++){
//         cout<<i;
//     }
// }

//print sum of numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<n;i++){
//         sum=sum+i;
//     }
//     cout<<sum;2
// }

//fibonacci series

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=0 ;
//     int b=1;
//     for(int i=1;i<=n;i++){
//         int temp=a+b;
//         a=b;
//         b=temp;
//         cout<<temp;
//     }
// }

//print sub of product and sum of digit of numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int product=1;
//     int sum=0;
//     while(n>0){
//         int digit = n % 10;
//         product=product*digit;
//         sum=sum+digit;
//         n /= 10;
//     }
//      cout<<"product:"<<product<<endl;
//     cout<<"sum:"<<sum<<endl;
//     cout<<"Sub ="<<product-sum;
    
    
// }

//count Number of one bits
 #include <iostream>
 using namespace std;
 int main(){
     int n;
     cin>>n;
     int count =0;
     while(n!=0){
         //checking last bit
         if(n&1){
             count++;
         }
         n = n>>1;
     }
     cout<<count;
 }