#include <vector>
#include <algorithm>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int n = nums.size();
        int xorr =0;
        for (int i=0; i<n; i++){
            xorr = xorr^nums[i];
        }
        return xorr;
    }
};
