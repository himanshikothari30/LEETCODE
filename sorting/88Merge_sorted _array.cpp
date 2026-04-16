class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // step 1: copy nums2 into nums1
        for(int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }

        // step 2: bubble sort
        int size = m + n;

        for(int i = 0; i < size - 1; i++) {
            for(int j = 0; j < size - i - 1; j++) {
                if(nums1[j] > nums1[j + 1]) {
                    swap(nums1[j], nums1[j + 1]);
                }
            }
        }
        
    }
};
