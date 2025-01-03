//Binary search
// #include <bits/stdc++.h>
// using namespace std;

// int binarySearch(vector<int>& nums, int target) {
//     int n = nums.size(); //size of the array
//     int low = 0, high = n - 1;

//     // Perform the steps:
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (nums[mid] == target) return mid;
//         else if (target > nums[mid]) low = mid + 1;
//         else high = mid - 1;
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
//     int target = 6;
//     int ind = binarySearch(a, target);
//     if (ind == -1) cout << "The target is not present." << endl;
//     else cout << "The target is at index: "
//                   << ind << endl;
//     return 0;
// }


//Implement Lower Bound

// #include <bits/stdc++.h>
// using namespace std;

// int lowerBound(vector<int> arr, int n, int x) {
//     int low = 0, high = n - 1;
//     int ans = n;

//     while (low <= high) {
//         int mid = (low + high) / 2;
//         // maybe an answer
//         if (arr[mid] >= x) {
//             ans = mid;
//             //look for smaller index on the left
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1; // look on the right
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {3, 5, 8, 15, 19};
//     int n = 5, x = 9;
//     int ind = lowerBound(arr, n, x);
//     cout << "The lower bound is the index: " << ind << "\n";
//     return 0;
// }



//Implement Upper Bound


// #include <bits/stdc++.h>
// using namespace std;

// int upperBound(vector<int> &arr, int x, int n) {
//     int low = 0, high = n - 1;
//     int ans = n;

//     while (low <= high) {
//         int mid = (low + high) / 2;
//         // maybe an answer
//         if (arr[mid] > x) {
//             ans = mid;
//             //look for smaller index on the left
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1; // look on the right
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {3, 5, 8, 9, 15, 19};
//     int n = 6, x = 9;
//     int ind = upperBound(arr, x, n);
//     cout << "The upper bound is the index: " << ind << "\n";
//     return 0;
// }



//Search Insert Position

// #include <bits/stdc++.h>
// using namespace std;

// int searchInsert(vector<int>& arr, int x) {
//     int n = arr.size(); // size of the array
//     int low = 0, high = n - 1;
//     int ans = n;

//     while (low <= high) {
//         int mid = (low + high) / 2;
//         // maybe an answer
//         if (arr[mid] >= x) {
//             ans = mid;
//             //look for smaller index on the left
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1; // look on the right
//         }
//     }
//     return ans;
// }


// int main()
// {
//     vector<int> arr = {1, 2, 4, 7};
//     int x = 6;
//     int ind = searchInsert(arr, x);
//     cout << "The index is: " << ind << "\n";
//     return 0;
// }


//Floor and Ceil in Sorted Array

// #include<bits/stdc++.h>
// using namespace std;

// int findFloor(int arr[], int n, int x) {
// 	int low = 0, high = n - 1;
// 	int ans = -1;

// 	while (low <= high) {
// 		int mid = (low + high) / 2;
// 		// maybe an answer
// 		if (arr[mid] <= x) {
// 			ans = arr[mid];
// 			//look for smaller index on the left
// 			low = mid + 1;
// 		}
// 		else {
// 			high = mid - 1; // look on the right
// 		}
// 	}
// 	return ans;
// }

// int findCeil(int arr[], int n, int x) {
// 	int low = 0, high = n - 1;
// 	int ans = -1;

// 	while (low <= high) {
// 		int mid = (low + high) / 2;
// 		// maybe an answer
// 		if (arr[mid] >= x) {
// 			ans = arr[mid];
// 			//look for smaller index on the left
// 			high = mid - 1;
// 		}
// 		else {
// 			low = mid + 1; // look on the right
// 		}
// 	}
// 	return ans;
// }

// pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
// 	int f = findFloor(arr, n, x);
// 	int c = findCeil(arr, n, x);
// 	return make_pair(f, c);
// }

// int main() {
// 	int arr[] = {3, 4, 4, 7, 8, 10};
// 	int n = 6, x = 5;
// 	pair<int, int> ans = getFloorAndCeil(arr, n, x);
// 	cout << "The floor and ceil are: " << ans.first
// 	     << " " << ans.second << endl;
// 	return 0;
// }



//First and last Occurance in an array

// #include <bits/stdc++.h>
// using namespace std;

// int firstOccurrence(vector<int> &arr, int n, int k) {
//     int low = 0, high = n - 1;
//     int first = -1;

//     while (low <= high) {
//         int mid = (low + high) / 2;
//         // maybe an answer
//         if (arr[mid] == k) {
//             first = mid;
//             //look for smaller index on the left
//             high = mid - 1;
//         }
//         else if (arr[mid] < k) {
//             low = mid + 1; // look on the right
//         }
//         else {
//             high = mid - 1; // look on the left
//         }
//     }
//     return first;
// }

// int lastOccurrence(vector<int> &arr, int n, int k) {
//     int low = 0, high = n - 1;
//     int last = -1;

//     while (low <= high) {
//         int mid = (low + high) / 2;
//         // maybe an answer
//         if (arr[mid] == k) {
//             last = mid;
//             //look for larger index on the right
//             low = mid + 1;
//         }
//         else if (arr[mid] < k) {
//             low = mid + 1; // look on the right
//         }
//         else {
//             high = mid - 1; // look on the left
//         }
//     }
//     return last;
// }


// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
//     int first = firstOccurrence(arr, n, k);
//     if (first == -1) return { -1, -1};
//     int last = lastOccurrence(arr, n, k);
//     return {first, last};
// }

// // int count(vector<int>& arr, int n, int x) {
// //     pair<int, int> ans = firstAndLastPosition(arr, n, x);
// //     if (ans.first == -1) return 0;
// //     return (ans.second - ans.first + 1);
// // }

// int main()
// {
//     vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
//     int n = 8, x = 8;
//     int ans = count(arr, n, x);
//     cout << "The number of occurrences is: "
//          << ans << "\n";
//     return 0;
// }



//Search element in a rotated sorted array

// #include <bits/stdc++.h>
// using namespace std;

// int search(vector<int>& arr, int n, int k) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;

//         //if mid points the target
//         if (arr[mid] == k) return mid;

//         //if left part is sorted:
//         if (arr[low] <= arr[mid]) {
//             if (arr[low] <= k && k <= arr[mid]) {
//                 //element exists:
//                 high = mid - 1;
//             }
//             else {
//                 //element does not exist:
//                 low = mid + 1;
//             }
//         }
//         else { //if right part is sorted:
//             if (arr[mid] <= k && k <= arr[high]) {
//                 //element exists:
//                 low = mid + 1;
//             }
//             else {
//                 //element does not exist:
//                 high = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
//     int n = 9, k = 1;
//     int ans = search(arr, n, k);
//     if (ans == -1)
//         cout << "Target is not present.\n";
//     else
//         cout << "The index is: " << ans << "\n";
//     return 0;
// }

