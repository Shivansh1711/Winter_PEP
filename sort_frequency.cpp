#include<bits/stdc++.h>
using namespace std;

bool compare(string &a, string &b){
    return a+b < b+a;
}
int main()
{
    int n;
    cin>>n;

    string a[n];

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    sort(a,a+n,compare);

    string result;
    for(int i = 0 ; i < n ; i++){
        result += a[i];
    }
    cout<<result<<endl;



    //https://codeforces.com/problemset/problem/632/C?locale=en

    //https://leetcode.com/problems/maximum-subarray/

    //https://www.geeksforgeeks.org/problems/max-sum-submatrix2725/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

    return 0;
}