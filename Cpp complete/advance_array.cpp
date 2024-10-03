// //Easy
// #include<bits/stdc++.h>
// using namespace std;
// int getSecondLargest(vector<int> &arr,int n) {
//         int largest =arr[0];
//         int seclargest = -1;
//         for(int i=0; in<n; i++){
//             if(arr[i] > largest){
//                 seclargest = largest;
//                 largest = arr[i];
//             }
//             else if(arr[i] < largest && arr[i] > seclargest){
//                 seclargest = arr[i];
//             }
//         }
//         return seclargest ;
//     }

// int getsecondSmallest(vector<int> &arr, int n){
//     int smallest = arr[0];
//     int secondSmallest = -1;
//     for(int i=0; i<n; i++){
//         if(arr[i] < smallest){
//             secondSmallest = smallest;
//             smallest = arr[i];
//         }
//         else if(arr[i] != smallest && arr[i] < secondSmallest){
//             secondSmallest = arr[i];
//         }
//     }
//     return secondSmallest;
// }

// //Right shift by k places
// #include <iostream>
// using namespace std;

// void rightShift(int arr[],int n,int k){
//     k=k%n;
    
//     int temp[k];
//     for(int i=0; i<k; i++){
//         temp[i] = arr[n-k+i];//to stiore elements in temp
//     }
//     for(int i=n-1; i>=k; i--){
//         arr[i] = arr[i-k]; //right shift the remaining elements
//     }
//     for(int i =0; i<k; i++){
//         arr[i] = temp[i];
//     }
    
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         cin >> arr[i];
//     }
//     int k;
//     cin >> k;
//     rightShift(arr,n,k);
//     for(int i=0;i<n;i++){
//         cout << arr[i] <<" ";
//     }
//     return 0;
// }

// //Left shift
// #include <iostream>
// using namespace std;

// void leftShift(int arr[], int n, int k) {
//     k = k % n;  // Normalize k to ensure it's within bounds

//     // Create a temporary array to store the first k elements
//     int temp[k];
//     for (int i = 0; i < k; i++) {
//         temp[i] = arr[i];  // Store the first k elements in temp
//     }

//     // Shift the remaining elements to the left
//     for (int i = 0; i < n - k; i++) {
//         arr[i] = arr[i + k];  // Shift elements to the left
//     }

//     // Copy the elements from temp back to the end of arr
//     for (int i = 0; i < k; i++) {
//         arr[n - k + i] = temp[i];  // Place temp elements at the end
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
    
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     int k;
//     cout << "Enter the number of positions to rotate left: ";
//     cin >> k;
    
//     leftShift(arr, n, k);
    
//     cout << "Array after left shift: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

//move zeros in last
 // void moveZeroes(vector<int>& nums) {
 //        int n = nums.size();
 //        int j=-1;
 //        for(int i=0;i<n;i++){ //if there are zeros in array give it to j
 //            if(nums[i] == 0){
 //                j = i;
 //                break;
 //            }
 //        }
 //        if(j == -1) return nums; // if j remains -1 it means all values are non-zeros return array 

 //        for(i =j+1; i<n; i++){
 //            if(nums[i] !=0){
 //                swap(nums[i], nums[j]);  //if zeros are there in array it will swap places with j
 //                j++;
 //            }
 //        }
 //        return nums;
 //    }
