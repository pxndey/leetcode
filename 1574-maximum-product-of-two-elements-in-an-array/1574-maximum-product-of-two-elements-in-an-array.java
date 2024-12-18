class Solution {
    public int maxProduct(int[] nums) {
        int maxP = 0;
        for(int i=0;i<nums.length;i++){
            for(int j=i;j<nums.length;j++){
                if((((nums[i]-1)*(nums[j]-1))>=maxP)&&i!=j){
                    maxP = (nums[i]-1)*(nums[j]-1);
                }
            }
        }    
        return maxP;
    }
    
}