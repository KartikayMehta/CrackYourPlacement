
       /* int ans;
        for(int i = 0;i < nums.size(); i++)
        {
            for(int j = i+1;j < nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    ans=nums[i];
                }
            }
        }
            return ans;
            */
          class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = 0, slow = 0;
        while(true){
            fast = nums[nums[fast]];
            slow = nums[slow];
            if(fast == slow)break;
        }
        slow  = 0;
        while(fast != slow){
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};
//Floyd Cycle finding algo or Hare Tortoise algo **IMP