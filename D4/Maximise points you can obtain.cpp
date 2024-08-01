class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int sum=0,mins=0,tsum=0,n=nums.size();
        for(int i=0;i<n;i++){
         if(i<n-k)   sum+=nums[i];
            tsum+=nums[i];
        }
        mins=sum;
        for(int i=n-k;i<n;i++){
            sum+=nums[i]-nums[i-n+k];
            mins=min(mins,sum);
        }
        return tsum-mins;
    }
};