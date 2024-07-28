class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int total = 0, sing = 0;
        for(int i : nums){
            if(i < 10) sing+=i;
            total += i;
        }
        return sing*2 != total; 
    }
};