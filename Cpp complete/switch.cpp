// Switch
// #include <iostream>
// using namespace std;
// int main(){
//     char ch ='1';
    
//     cout<<endl;
//     switch(ch){
        
//         case 1:cout<<"first"<<endl;
//         break;
        
//         case '1':cout<<"Character"<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

//calculator
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
    
//     cout<<"Enter value of a"<<endl;
//     cin>>a;
//     cout<<"enter value of b"<<endl;
//     cin>>b;
    
//     char op;
//     cout<<"enter operation you want to perform '+''-''*''/'"<<endl;
//     cin>>op;
//     switch(op){
//         case '+':cout<<(a+b)<<endl;
//         break;
        
//         case '-':cout<<(a-b)<<endl;
//         break;
        
//         case '*':cout<<(a*b)<<endl;
//         break;
                                    
//         case '/':cout<<(a/b)<<endl;
//         break;
        
//         return 0;
//     }
// }    

//count number of notes require to complete the amount
// #include <iostream>
// using namespace std;
// int main(){
//     int amount;
//     cin>>amount;
//     int rs100,rs50,rs20,rs1;
    
//     switch(1){
//         case 1:rs100=amount/100;
//         amount=amount%100;
//         cout<<"100 ke notes:"<<rs100<<endl;
        
//         case 2:rs50=amount/50;
//         amount=amount%50;
//         cout<<"50 ke note:"<<rs50<<endl;
        
//         case 3:rs20=amount/20;
//         amount=amount%20;
//         cout<<"20 ke note:"<<rs20<<endl;
                                    
//         case 4:rs1=amount/1;
//         amount=amount%1;
//         cout<<"1 ka note:"<<rs1<<endl;
//         return 0;
//     }
// }   