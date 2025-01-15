#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    return a.second > b.second;
}
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		a[i] = {x,y};
	}
    sort(a.begin(),a.end(),compare);

    for (int i = 0; i < n; i++) {
		cout << a[i].first << " " << a[i].second << '\n';
	}
    return 0;
}