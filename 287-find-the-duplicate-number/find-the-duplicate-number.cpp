class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for (int i : nums) {
            if (ans.count(i))
                return i;
            ans.insert(i);
        }
        return -1;
    }
};