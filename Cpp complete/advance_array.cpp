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

//union of two array brute force approcah
//  vector<int> findUnion(int arr1[], int arr2[], int n, int m)
//     {
//         set<int>st;
//         for(int i=0; i<n; i++){
//             st.insert(arr1[i]);
//         }
//         for(int i=0; i<m; i++){
//             st.insert(arr2[i]);
//         }
//         vector<int>temp;
//         for(auto it : st){
//             temp.push_back(it);
//         }
//         return temp;
//     }

// //optimal solution o(n1+n2)      
// #include<bits/stdc++.h>

// vector <int> sortedArray(vector<int>arr1 ,vector<int>arr2){
//     int n =arr1.size();
//     int m =arr2.size();
//     int i=0;
//     intj=0;
//     vector<int> unionArr;
//     while(i<n && j<m){
//         if(arr1[i] <= arr2[j]){ //push element of arr1 if it is                           smaller then arr2
//             if(unionArr.size() == 0 || unionArr.back != arr1[i]){
//                 unionArr.push_back(arr1[i]);
//             }//union.back checks prev element 
//             i++;
//         }
//         else{
//              if(unionArr.size() == 0 || unionArr.back != arr2[j]){
//                 unionArr.push_back(arr2[j]);//push element of arr2                      if it is smaller then arr1
//             }
//             j++;
//         }
//     }
//     while(j<arr2){
//          if(unionArr.size() == 0 || unionArr != arr2[j]){
//                 unionArr.push_back(arr2[j]);
//             }//if arr2 is bigger than arr1
//             j++;
//     }
//     while(i<arr1){
//         if(unionArr.size() == 0 || unionArr != arr1[i]){
//                 unionArr.push_back(arr1[i]);
//             }//if arr1 is bigger than arr2
//             i++;
//     }
//     return unionArr;
// }

// //intersection of two array
// vector<int> findArrayIntersection(vector<int>&a,vector<int>&b,int n,int m){
//     int i=0;
//     int j=0;
//     vector<int>ans;
//     while(i<n && j<m){
//         if(a[i] < b[j]){//if any element if b is smaller than a means it has no partner and b shoul move on
//             i++;
//         }
//         else if(b[j] < a[i]){
//             j++;  //if any element if b is smaller than a means it has no partner and b shoul move on
//         }
//         else {
//             ans.push_back(a[i])
//             i++;
//             j++; //if a==b they can be in a realtionship and both move forward
//         }
//     }
//     return ans;
// }



//Longest sub array with sum k
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution {
//   public:
//     int lenOfLongestSubarr(vector<int>& arr, int k) {
//         int left =0;
//         int right =0;
//         int maxLen = 0;
//         int sum = arr[0];
//         int max = 0;
//         int n = arr.size();
//         while(right < n){
//             while(left <= right && sum > k){
//                 sum -= arr[left];
//                 left++;
//             }
//             if(sum == k){
//                 maxLen = max(maxLen, right -left +1 );
//             }
//             right ++;
//             if(right<n)sum += arr[right];
//         }
//         return maxLen;
//     }
// };



//MODERATE ARRAY PROBLEMS
//two sum array
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int left =0;
//         int right =n-1;
//         sort(nums.begin(),nums.end());
//         while(left < right){
//             int sum = nums[left] + nums[right];
//             if(sum == target) {
//                 return "Yes";
//             }
//             if(sum < target) left++;
//             else right--;
//         }
//         return "NO";
//     }
// };
