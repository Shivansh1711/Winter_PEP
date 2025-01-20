#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[] , int target , int low , int high){
    if(low > high) return -1;

    int mid = (low+high)/2;

    if(arr[mid] == target) return mid;
    else if(arr[mid] > target) return binarySearch(arr,target,low,mid-1);
    else return binarySearch(arr,target,mid+1,high);
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  

    int val;
    cin>>val;

    int index = binarySearch(arr,val,0,n-1);
    cout << index << " " <<endl; 
    return 0;
}