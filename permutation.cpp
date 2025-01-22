#include<bits/stdc++.h>
using namespace std;

    void permutation(string pro, string unPro){
        if(unPro.empty()){
            cout<<pro<<endl;
            return;
        }

        char ch = unPro[0];

        for(int i = 0 ; i <= pro.length(); i++){
            string first = pro.substr(0,i);
            string second = pro.substr(i,pro.length());

            permutation(first+ch+second,unPro.substr(1));
        }
    }
int main()
{
    string s = "abc";
    permutation("",s);
    return 0;
}