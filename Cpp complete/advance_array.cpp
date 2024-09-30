//Easy
#include<bits/stdc++.h>
using namespace std;
int getSecondLargest(vector<int> &arr,int n) {
        int largest =arr[0];
        int seclargest = -1;
        for(int i=0; in<n; i++){
            if(arr[i] > largest){
                seclargest = largest;
                largest = arr[i];
            }
            else if(arr[i] < largest && arr[i] > seclargest){
                seclargest = arr[i];
            }
        }
        return seclargest ;
    }

int getsecondSmallest(vector<int> &arr, int n){
    int smallest = arr[0];
    int secondSmallest = -1;
    for(int i=0; i<n; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < secondSmallest){
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}