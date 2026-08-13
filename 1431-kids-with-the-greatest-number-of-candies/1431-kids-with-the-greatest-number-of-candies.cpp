#include <algorithm>

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());
        vector<bool> results;
        for(int candy : candies){
            if(candy+extraCandies >= max){
                results.push_back(true);
            }else{
                results.push_back(false);
            }

        }

        return results;
    }
};