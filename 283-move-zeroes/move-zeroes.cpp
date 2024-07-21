class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int curr = 0;
        int n = nums.size();
        for(int i = 0; i < n ; i++){
            if(nums[i] != 0){
                nums[curr++] = nums[i];
            }
        }
        for(; curr < n ;curr++) nums[curr] = 0;
    }
};