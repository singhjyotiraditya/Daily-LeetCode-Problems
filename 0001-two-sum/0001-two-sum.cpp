class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> preVal;
        int rem=0;
        for (int i=0; i<nums.size(); i++){
            rem = target - nums[i];
            if(preVal.find(nums[i])!=preVal.end()){
                return {preVal[nums[i]], i};
            }
            else{
                preVal[rem]=i;
            }
        }
        return {-1, -1};
    }
};