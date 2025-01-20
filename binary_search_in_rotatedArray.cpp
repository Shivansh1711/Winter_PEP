#include<bits/stdc++.h>
using namespace std;

int binarySearch(int nums[], int target, int low , int high){
    if(low > high) return -1;

    int mid = (low+high)/2;
    if(nums[mid] == target) return mid;

    if(nums[low] <= nums[mid]){
        if(target >= nums[low] && target <= nums[mid]){
            return binarySearch(nums,target,low,mid-1);
        }
        else{
            return binarySearch(nums,target,mid+1,high);
        }
    }

    if(target >= nums[mid+1] && target <= nums[high]){
        return binarySearch(nums,target,mid+1,high);
    }

    return binarySearch(nums,target,low,mid-1);
}
int main()
{
    int n;
    cin>>n;

    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }  

    int val;
    cin>>val;

    int index = binarySearch(nums,val,0,n-1);
    cout << index << " " <<endl; 
    return 0;
}