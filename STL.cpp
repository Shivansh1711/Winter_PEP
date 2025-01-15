#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr;
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(6);
    arr.push_back(7);

    sort(arr.begin(),arr.end());

    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<"\n";

    auto it = unique(arr.begin(),arr.end());
    cout << "value before that my array became unique "<<*it<<endl;

    arr.resize(it - arr.begin());

    int count = 0;
    for(auto it : arr){
        cout<<it<<" ";
        count++;
    }
    cout<<"\n";
    cout<<"Number of unique elements are : "<<count<<endl;


    vector<int> v = {1 ,2,2,1,1,6,6};
    auto temp = unique(v.begin(), v.end());
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<"\n";



    
    return 0;
}