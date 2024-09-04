//Patterns
// #include <iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m;//rows
//     cin>>n;//column
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=m){
//             cout << "*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m;//rows
//     cin>>n;//column
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=m){
//             cout << i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m;//rows
//     cin>>n;//column
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=m){
//             cout << n-j+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m;//rows
//     cin>>n;//column
//     int count=1;
    
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=m){
//             cout << count;
//             j=j+1;
//             count=count+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m;//rows
//     cin>>n;//column
//     int count =1;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout << count;
//             j=j+1;
//             count=count+1;
           
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m;//rows
//     cin>>n;//column
    
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout << i-j+1;
//             j=j+1;
           
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m;//rows
//     cin>>n;//column
//     char ch='A';
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=m){
//             cout << ch ;
//             j=j+1;
//             ch=ch+1;
           
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m;//rows
//     cin>>n;//column
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=m){
//             char ch = 'A'+i+j-2;
//             cout << ch ;
//             j=j+1;
            
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m;//rows
//     cin>>n;//column
    
//     int i=1;
//     while(i<=n){
//         //print space
//         int space =n-i;
//         while(space){
//             cout<<" ";
//             space=space-1;
//         }
//         int j=1;
//         while(j<=i){
//             cout << "*";
//             j=j+1;
           
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

//traingle
// #include <iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m;//rows
//     cin>>n;//column
    
//     int i=1;
//     while(i<=n){
//         //print space
//         int space =n-i;
//         while(space){
//             cout<<" ";
//             space=space-1;
//         }
//         //print first traingle
//         int j=1;
//         while(j<=i){
//             cout << j;
//             j=j+1;
           
//         }
//         //print second traingle
        
//         int start = i-1;
//         while(start){
//             cout<<start;
//             start = start-1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }
