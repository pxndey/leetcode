class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int totalCount = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]+nums[j]<target){
                    totalCount++;
                }
            }
        }
        return totalCount;
    }
};