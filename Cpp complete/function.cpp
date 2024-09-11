//Function
//to print square of number
// #include <iostream>
// using namespace std;

// int power(int a,int b){
    
//     int ans =1;
//     for(int i=1; i<=b;i++){
//         ans =ans *a;
//     }
//     return ans;
// }
// int main(){
//     int a,b;
//     cin>>a >>b;
    
//     int answer =power(a,b);
//     cout<<answer;
//     return 0;
// }

//pass by value
// #include <iostream>
// using namespace std;

// void dummy(int n) {
//     n++;
//     cout<<"n is"<<n<<endl;
    
// }
// int main(){
//     int n;
//     cin>>n;
    
//     dummy(n);
    
//     cout<<"number n is "<<n<<endl;
//     return 0;
// }
//pass by value 2
// #include <iostream>
// using namespace std;

// void doSomething(int num){
//     cout << num <<endl;
//     num+=5;
//     cout << num <<endl;
//     num +=5;
//     cout << num <<endl;
// }
// int main(){
//     int num =10;
//     doSomething(num);
//     cout << num <<endl;
//     return 0;
// }


//number of set bits in a&b
// #include <iostream>
// using namespace std;

// int setbitA(int a){
//     int count =0;
//     while(a!=0){
//         if(a&1){
//             count++;
//         }
//         a=a>>1;
//     }
//     return count;
// }
// int setbitB(int b){
//     int count1=0;
//     while(b!=0){
//         if(b&1){
//             count1++;
//         }
//         b=b>>1;
//     }
//     return count1;
// }
// int main(){
//     int a,b;
//     cin>>a >>b;
//     int ans1=setbitA(a);
//     int ans2=setbitB(b);
//     int ans =ans1+ans2;
//     cout<<"set bit in a :"<<ans1<<endl;
//     cout<<"set bit in b :"<<ans2<<endl;
    
//     cout<<"total number of set bit in A & B :"<<ans<<endl;
//     return 0;
// }
