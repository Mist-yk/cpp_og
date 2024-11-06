//Dutch National flag algorithm. 
//sort 0s 1s 2s in array
// #include <bits/stdc++.h>
// using namespace std;

// void sortArray(vector<int>& arr, int n) {

//     int low = 0, mid = 0, high = n - 1; // 3 pointers

//     while (mid <= high) {
//         if (arr[mid] == 0) {
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid] == 1) {
//             mid++;
//         }
//         else {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

// int main()
// {
//     int n = 6;
//     vector<int> arr = {0, 2, 1, 2, 0, 1};
//     sortArray(arr, n);
//     cout << "After sorting:" << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//Moore’s Voting Algorithm
//print majority element which is more tha size/2
// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> v) {

//     //size of the given array:
//     int n = v.size();
//     int cnt = 0; // count
//     int el; // Element

//     //applying the algorithm:
//     for (int i = 0; i < n; i++) {
//         if (cnt == 0) {
//             cnt = 1;
//             el = v[i];
//         }
//         else if (el == v[i]) cnt++;
//         else cnt--;
//     }

//     //checking if the stored element
//     // is the majority element:
//     int cnt1 = 0;
//     for (int i = 0; i < n; i++) {
//         if (v[i] == el) cnt1++;
//     }

//     if (cnt1 > (n / 2)) return el;
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }


//Kadance algorithm
//sum of largest subarray
// #include <bits/stdc++.h>
// using namespace std;

// long long maxSubarraySum(int arr[], int n) {
//     long long maxi = LONG_MIN; // maximum sum
//     long long sum = 0;

//     for (int i = 0; i < n; i++) {

//         sum += arr[i];

//         if (sum > maxi) {
//             maxi = sum;
//         }

//         // If sum < 0: discard the sum calculated
//         if (sum < 0) {
//             sum = 0;
//         }
//     }

//     // To consider the sum of the empty subarray
//     // uncomment the following check:

//     //if (maxi < 0) maxi = 0;

//     return maxi;
// }

// int main()
// {
//     int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     long long maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }