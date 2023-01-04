class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long sum = 0,original = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum += nums[i];
            original += i*nums[i];
        }
        
        long maximum = original;
      
        
        for(int i= n-1;i>=0;i--)
        {
            original += sum -(nums[i]*n);
            maximum = max(original,maximum);
        }
        return maximum;
    }
};