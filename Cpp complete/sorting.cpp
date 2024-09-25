#include <bits/stdc++.h>
using namespace std;
// //selection sort push min to the front
//time complexcity is big of n(n2)
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
    
//     for(int i = 0; i<=n-2; i++){
//         int min = i;
//         for(int j=i; j<=n-1; j++){
//             if(arr[j] < arr[min]){
//                 min = j;
//             }
//           int temp = arr[min];
//           arr[min] = arr[i];
//           arr[i] = temp;
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout << arr[i] <<" ";
//     }
//     return 0;
// }

//Bubble sort push the max to the last
// void bubble_sort(int arr[], int n){
//     for(int i=n-1; i>=1; i--){
//         int max=i;
//         for(int j=0; j<=i; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

//Insertion sort takes element and place it in correct order
void insertion_sort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            
            j--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }insertion_sort(arr, n);
    for(int i=0; i<n; i++){
        cout <<arr[i] <<" " ;
    }
    
}