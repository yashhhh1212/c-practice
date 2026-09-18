class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
       vector<int> Ans;
       for(int i=0;i<nums.size();i++){
        Ans.push_back(nums[nums[i]]);
       }
            return Ans;
    }
};