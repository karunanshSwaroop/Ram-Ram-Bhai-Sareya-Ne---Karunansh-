class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1)
        return(nums[0]);
        sort(nums.begin(),nums.end());
        int c=1,i;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            c++;
            else
            c=1;
            if(c>(nums.size()/2))
            break;
        }
        return(nums[i]);
    }
};