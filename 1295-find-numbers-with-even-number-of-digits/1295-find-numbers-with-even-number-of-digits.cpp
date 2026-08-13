class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int num : nums){
            int length = to_string(num).length();
            if(length%2==0){
                count++;            }
        }

        return count;
    }
};