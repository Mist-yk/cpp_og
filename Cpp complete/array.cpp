//Array
// #include <iostream>

// int main() {
//     using namespace std;  // Allows us to use cout and cin without std:: prefix

//     int size;
//     cout << "Enter the size of your array: ";
//     cin >> size;
    

//     // Declare an array with the specified size
//      int* elements = new int[size];

//     // Input elements into the array
//     for (int i = 0; i < size; ++i) {
//         cout << "Enter number: ";
//         cin >> elements[i];
//     }

//     // Print elements of the array
//     cout << "Array elements: ";
//     for (int i = 0; i < size; ++i) {
//         cout << elements[i] << " ";
//     }
//     cout << endl;

    

//     return 0;
// }

//diff types of array
// #include <iostream>
// using namespace std;
// int main(){
//     char ch[5] ={'a','b','c','d'};
//     cout<<ch[3]<<endl;
    
//     for(int i=0;i<5;i++){
//         cout<<ch[i]<<" ";
        
//         double arr[5];
//         float frr[4];
//         bool brr[6];
//     }
// }


//Min and max in array
// #include <iostream>
// #include <limits.h>
// using namespace std;

// int getMax(int num[],int n){
//     int max =INT_MIN;//default value
    
//     for(int i=0;i<n;i++){
//         if(num[i]>max){
//             max=num[i];
//         }
//     }
//     return max;
// }

// int getMin(int num[],int n){
//     int min =INT_MAX;
    
//     for(int i=0;i<n;i++){
//         if(num[i]<min){
//             min = num[i];
//         }
//     }
//     return min;
// }
// int main(){
//     int size;
//     cin>>size;
    
//     int num[10];
    
//     for(int i=0;i<size;i++){
//         cin>>num[i];
//     }
    
//     cout<<"Max value is :"<<getMax(num,size)<<endl;
//     cout<<"Max value is :"<<getMin(num,size)<<endl;
    
    
// }

//Linear search
// #include <iostream>
// using namespace std;

// bool search(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i] == key){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,87,97,8};
//     cout<<"Enter key u want to search :";
//     int key;
//     cin>>key;
    
//     bool found = search(arr,10,key);
    
//     if(found){
//         cout<<"key is present:"<<endl;
//     }
//     else{
//         cout<<"key is absent:"<<endl;
//     }
    
//     //whether 1 is present in it ?
    
    
// }

// #include <iostream>
// using namespace std;

// void reverse(int arr[],int n){
//     int start =0;
//     int end =n-1;
    
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout <<endl;
// }
//  int main(){
//      int arr[5] = {1,2,3,4,5};
     
//      reverse(arr,5);
     
//      printArray(arr,5);
//      }
 