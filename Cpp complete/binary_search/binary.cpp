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