class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int preSum = 0, count = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        
        for(int i=0;i<n;i++){
            preSum += nums[i];
            int remove = preSum - k;
            count += mp[remove];
            mp[preSum] += 1;
        }

        return count;
    }
};