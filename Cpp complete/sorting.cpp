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
// void insertion_sort(int arr[], int n){
//     for(int i=0; i<=n-1; i++){
//         int j=i;
//         while(j > 0 && arr[j-1] > arr[j]){
//             int temp = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = temp;
            
//             j--;
//         }
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }insertion_sort(arr, n);
//     for(int i=0; i<n; i++){
//         cout <<arr[i] <<" " ;
//     }
    
// }

// //merge sort
// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(vector<int> &arr, int low, int mid, int high) {
//     vector<int> temp;
//     // Two pointers
//     int left = low;
//     int right = mid + 1;

//     // Merge the two halves
//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         } else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     // Copy remaining elements from the left half, if any
//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     // Copy remaining elements from the right half, if any
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     // Copy the merged elements back into the original array
//     for (int i = 0; i < temp.size(); i++) {
//         arr[low + i] = temp[i];
//     }
// }

// void mS(vector<int> &arr, int low, int high) {
//     if (low >= high) return; // Base case: no elements or one element

//     int mid = (low + high) / 2;
//     mS(arr, low, mid);      // Sort the left half
//     mS(arr, mid + 1, high); // Sort the right half
//     merge(arr, low, mid, high); // Merge the sorted halves
// }

// int main() {
//     vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
//     cout << "Original array: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;

//     mS(arr, 0, arr.size() - 1);

//     cout << "Sorted array: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }
