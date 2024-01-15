class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            int b = target-nums[i];
            for (int j=0; j<n; j++){
                if (b==nums[j] && j != i){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};