class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int x;
        bool flag=true;
        int count=0;
       for (int i=1; i<n; i++){
           if (nums[i]<nums[i-1]){
                x=i;  
                flag=false;     
           }
       }
  
       if(flag) return true;
       if(nums[0]<nums[n-1]) return false;

       for (int i=x+1; i<n; i++){
           if(nums[i]<nums[i-1]){
               return false;
           }
       }

       for (int i=1; i<x;i++){
           if (nums[i]<nums[i-1]){
               return false;
           }
       }
       return true;
    }
};