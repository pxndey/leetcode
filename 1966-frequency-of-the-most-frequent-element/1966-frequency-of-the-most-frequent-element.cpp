class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    
    int left=0;
    int right=0;
    int result=0;
    long total=0;
    
    while (right<nums.size()){
        total = total + nums[right];

        while((long)nums[right]*(right-left+1)> total+k){
        
            total = total-nums[left];
            left++;
        
        }

        result = max(result,right-left+1);
        right++;
    }

    return result;


        

    }
};