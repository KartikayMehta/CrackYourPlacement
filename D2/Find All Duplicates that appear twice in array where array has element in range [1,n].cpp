class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            int indexofelement = abs(nums[i]) - 1;
            nums[indexofelement] = -nums[indexofelement];
            if(nums[indexofelement]>0)
            {
                ans.push_back(indexofelement+1);
            }
        }
        return ans;
    }
};