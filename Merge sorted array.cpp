class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums2Last = n - 1, nums1Last = m - 1, length = m + n - 1;

        if (m == 0) {
            nums1 = nums2;
            return;
        }

        while (nums1Last >= 0 && nums2Last >= 0) {
            if (nums1[nums1Last] >= nums2[nums2Last]) {
                nums1[length--] = nums1[nums1Last--];
            } else {
                nums1[length--] = nums2[nums2Last--];
            }
        }

        while (nums2Last >= 0) {
            nums1[length--] = nums2[nums2Last--];
        }
    }
};