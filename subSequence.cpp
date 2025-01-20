#include<bits/stdc++.h>
using namespace std;

//generating all the subsequence of a given string

void subsequence(string pro , string unPro){
    if(unPro.empty()){
        cout << pro << endl;
        return;
    }

    char ch = unPro[0];
    subsequence(pro,unPro.substr(1));
    subsequence(pro+ch,unPro.substr(1));

}

vector<string> subSeq(string str, string curr , int index, vector<string> &ans){
    if(index == str.length()){
        ans.push_back(curr);
        return ans;
    }

    //not take
    subSeq(str,curr,index+1,ans);

    //take
    subSeq(str,curr+str[index],index+1,ans);

    return ans;
}

vector<vector<int>> subSet(vector<int> nums, vector<int> curr , int index, vector<vector<int>> &res){
    if(index == nums.size()){
        res.push_back(curr);
        return;
    }

    //not take
    subSet(nums,curr,index+1,res);

    //take
    curr.push_back(nums[index]);
    subSet(nums,curr,index+1,res);
    curr.pop_back();  //backtrack to remove last taken element

    return res;
}


int main()
{
    string str = "abc";
    // subsequence("",str);

    vector<string> ans;
    subSeq(str,"",0,ans);

    for(string num : ans){
        cout << num << endl;
    }

    vector<int> nums = {3,4,5};
    vector<vector<int>> res;
    vector<int>curr;
    subSet(nums,curr,0,res);


    for(vector<int> num : res){
        cout<<"[ ";
        for(int i : num){
            cout << i << " ";
            }
            cout <<"]"<< endl;
    }
    return 0;
}