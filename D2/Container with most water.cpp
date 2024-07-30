class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int mxwater = INT_MIN;
        while(left<right)
        {
           int water = (right - left)*min(height[left],height[right]);
           mxwater = max(mxwater,water); 
           if(height[left]<height[right])
           {
                left++;
           }
           else
                right--;
        }
        return mxwater;

    }
};
// brute force using two for loops and optimal using two pointer;