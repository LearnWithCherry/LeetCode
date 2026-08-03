class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ip = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[ip] = nums[i];
                ip++;
            }
        }
        while(ip < nums.size()){
            nums[ip] = 0;
            ip++;
        }
    }
};