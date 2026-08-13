class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0; i<size; i++){
            if(i==0){
                continue;
            }else{
                nums[i] = nums[i] + nums[i-1];
            }
        }
        return nums;
    }
};