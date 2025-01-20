class Solution {
public:
int maxSubArray(vector<int>& a) {
int best_end = a[0];
int max_end = a[0];

for (int i = 1; i < a.size(); i++) {
best_end = max(best_end + a[i], a[i]);
max_end = max(max_end, best_end);
}
return max_end;
}
};