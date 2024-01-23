class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> hash(nums.size()+1,0);
        vector<int> ans;
        int miss=0;
        int twice=0;
        for (int i=0; i<nums.size(); i++){
            hash[nums[i]]++;
        }
        for (int i=0; i<hash.size(); i++){
            if(hash[i]==0 && i!=0){
                miss=i;
            }
             if (hash[i]==2){
                twice=i;
            }
        }
        ans.push_back(twice);
        ans.push_back(miss);
        return ans;
    }
};