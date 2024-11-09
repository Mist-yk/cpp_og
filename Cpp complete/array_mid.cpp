//Leaders in an array =  A Leader is an element that is greater than all of the elements on its right side in the array.

//#include<bits/stdc++.h>
// using namespace std;

// vector<int> printLeaders(int arr[], int n) {

//   vector<int> ans;
  
//  // Last element of an array is always a leader,
//  // push into ans array.
//  int max = arr[n - 1];
//  ans.push_back(arr[n-1]);

//   // Start checking from the end whether a number is greater
//   // than max no. from right, hence leader.
//   for (int i = n - 2; i >= 0; i--)
//     if (arr[i] > max) {
//       ans.push_back(arr[i]);
//       max = arr[i];
//     }

  
//   return ans;
// }

// int main() {
    
//   // Array Initialization.
//   int n = 6;
//   int arr[n] = {10, 22, 12, 3, 0, 6};

//   vector<int> ans = printLeaders(arr,n);
  
  
//   for(int i = ans.size()-1;i>=0;i--){
      
//       cout<<ans[i]<<" ";
//   }
  
//   cout<<endl;
//   return 0;
// }


//Longest Consecutive Sequence in an Array
 //by sorting an array
// #include <bits/stdc++.h>
// using namespace std;

// int longestSuccessiveElements(vector<int>&a) {
//     int n = a.size();
//     if (n == 0) return 0;

//     //sort the array:
//     sort(a.begin(), a.end());
//     int lastSmaller = INT_MIN;
//     int cnt = 0;
//     int longest = 1;

//     //find longest sequence:
//     for (int i = 0; i < n; i++) {
//         if (a[i] - 1 == lastSmaller) {
//             //a[i] is the next element of the
//             //current sequence.
//             cnt += 1;
//             lastSmaller = a[i];
//         }
//         else if (a[i] != lastSmaller) {
//             cnt = 1;
//             lastSmaller = a[i];
//         }
//         longest = max(longest, cnt);
//     }
//     return longest;

// }

// int main()
// {
//     vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestSuccessiveElements(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }




 //using unorderd list
// #include <bits/stdc++.h>
// using namespace std;

// int longestSuccessiveElements(vector<int>&a) {
//     int n = a.size();
//     if (n == 0) return 0;

//     int longest = 1;
//     unordered_set<int> st;
//     //put all the array elements into set:
//     for (int i = 0; i < n; i++) {
//         st.insert(a[i]);
//     }

//     //Find the longest sequence:
//     for (auto it : st) {
//         //if 'it' is a starting number:
//         if (st.find(it - 1) == st.end()) {
//             //find consecutive numbers:
//             int cnt = 1;
//             int x = it;
//             while (st.find(x + 1) != st.end()) {
//                 x = x + 1;
//                 cnt = cnt + 1;
//             }
//             longest = max(longest, cnt);
//         }
//     }
//     return longest;

// }

// int main()
// {
//     vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestSuccessiveElements(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }





//Set matrix to zero =Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

//#include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

//     // int row[n] = {0}; --> matrix[..][0]
//     // int col[m] = {0}; --> matrix[0][..]

//     int col0 = 1;
//     // step 1: Traverse the matrix and
//     // mark 1st row & col accordingly:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 // mark i-th row:
//                 matrix[i][0] = 0;

//                 // mark j-th column:
//                 if (j != 0)
//                     matrix[0][j] = 0;
//                 else
//                     col0 = 0;
//             }
//         }
//     }

//     // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
//     for (int i = 1; i < n; i++) {
//         for (int j = 1; j < m; j++) {
//             if (matrix[i][j] != 0) {
//                 // check for col & row:
//                 if (matrix[i][0] == 0 || matrix[0][j] == 0) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }

//     //step 3: Finally mark the 1st col & then 1st row:
//     if (matrix[0][0] == 0) {
//         for (int j = 0; j < m; j++) {
//             matrix[0][j] = 0;
//         }
//     }
//     if (col0 == 0) {
//         for (int i = 0; i < n; i++) {
//             matrix[i][0] = 0;
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is: n";
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "n";
//     }
//     return 0;
// }



//Rotate matrix by 90 degree
//use transpose of matrix(convert column into rows)

// #include<bits/stdc++.h>

// using namespace std;
// void rotate(vector < vector < int >> & matrix) {
//     int n = matrix.size();
//     //transposing the matrix
//     for (int i = 0; i < n; i++) {
//     for (int j = 0; j < i; j++) {
//         swap(matrix[i][j], matrix[j][i]);
//     }
//     }
//     //reversing each row of the matrix
//     for (int i = 0; i < n; i++) {
//     reverse(matrix[i].begin(), matrix[i].end());
//     }
// }

// int main() {
//     vector < vector < int >> arr;
//     arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     rotate(arr);
//     cout << "Rotated Image" << endl;
//     for (int i = 0; i < arr.size(); i++) {
//     for (int j = 0; j < arr[0].size(); j++) {
//         cout << arr[i][j] << " ";
//     }
//     cout << "n";
//     }

// }


//Spiral Traversal of Matrix

// #include <bits/stdc++.h>

// using namespace std;

// vector<int> printSpiral(vector<vector<int>> mat) {
 
//   // Define ans array to store the result.
//   vector<int> ans;
 
//   int n = mat.size(); // no. of nows
//   int m = mat[0].size(); // no. of columns
  
//   // Initialize the pointers reqd for traversal.
//   int top = 0, left = 0, bottom = n - 1, right = m - 1;

//   // Loop until all elements are not traversed.
//   while (top <= bottom && left <= right) {
      
//     // For moving left to right
//     for (int i = left; i <= right; i++)
//       ans.push_back(mat[top][i]);

//     top++;

//     // For moving top to bottom.
//     for (int i = top; i <= bottom; i++)
//       ans.push_back(mat[i][right]);

//     right--;
    
//     // For moving right to left.
//     if (top <= bottom) {
//       for (int i = right; i >= left; i--)
//        ans.push_back(mat[bottom][i]);

//       bottom--;
//     }

//     // For moving bottom to top.
//     if (left <= right) {
//       for (int i = bottom; i >= top; i--)
//         ans.push_back(mat[i][left]);

//       left++;
//     }
//   }
//   return ans;
// }

// int main() {
    
//   //Matrix initialization.
//   vector<vector<int>> mat   {{1, 2, 3, 4},
//                              {5, 6, 7, 8},
// 	                         {9, 10, 11, 12},
// 		                     {13, 14, 15, 16}};
		                     
//   vector<int> ans = printSpiral(mat);

//   for(int i = 0;i<ans.size();i++){
      
//       cout<<ans[i]<<" ";
//   }
  
//   cout<<endl;
  
//   return 0;
// }