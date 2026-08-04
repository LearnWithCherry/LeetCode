class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        for (int current=0; current<nums.size(); current++){
            if (nums[current] != 0){
                swap(nums[left], nums[current]);
                left++;
            }
        }
    }
};