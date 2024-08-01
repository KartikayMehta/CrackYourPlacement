class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        //Prefix sum approach
        
        unordered_map<int,int> mp; // prefixsum and frequency map 
        
        int count = 0 , sum = 0; //initialise counter and sum with 0
        
        mp[sum] = 1; // we will put 1 in the map first
        
        for(auto i : nums)
        {
            sum = sum + i; //calculate the prefix sum 
            
            if(mp.find(sum - k) != mp.end()) // we using this case X + (X - k) = k
            {
                count = count + mp[sum - k];
            }
            mp[sum]++;
        }
        return count;
    }
	
};