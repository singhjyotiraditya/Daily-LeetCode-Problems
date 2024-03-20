class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                ele = nums[i];
            }
            if (nums[i] == ele) {
                count++;
            } else if (nums[i] != ele) {
                count--;
            }
        }

        int counter = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (ele == nums[i]) {
                counter++;
            }
        }

        if (counter > (nums.size() / 2)) {
            return ele;
        }
        return -1;
    }
};