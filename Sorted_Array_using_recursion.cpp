#include<bits/stdc++.h>
using namespace std;
bool sortChecker(int arr[], int i, int n){
    if(i >= n) return true;
    if(arr[i] < arr[i-1]) return false;

    return sortChecker(arr,i+1,n);

}

int linearSearch(int arr[], int target,int i , int n){
    if(i >= n) return -1;

    if(arr[i] == target) return i;

    return linearSearch(arr,target,i+1,n);
}

void allIndex(int arr[], int target,int i, int n, vector<int> &ans){
    if(i >= n) return ;

    if(arr[i] == target) ans.push_back(i);

    return allIndex(arr,target,i+1,n,ans);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool res = sortChecker(arr,1,n);
    cout<<res<<endl;

    int val;
    cin>>val;

    int index = linearSearch(arr,val,0,n);
    cout << index << " " <<endl;

    vector<int> ans;
    allIndex(arr,val,0,n,ans);

    for(int num : ans){
        cout<< num << " ";
    }


    return 0;
}