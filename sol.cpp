class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int counter[mx+1];
        memset(counter, 0, sizeof(counter));
        for (int x : nums) {
            counter[x]++;
        }
        for (int i = 0; i < mx + 1; i++) {
            if (counter[i] == 0) {
                return i;
            }
        }
        return mx + 1;
    }
};
