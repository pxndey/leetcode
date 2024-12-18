class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int size = nums.length;
        int[] smaller = new int[size];
        for(int i=0;i<size;i++){
            smaller[i]=0;
            for(int j=0;j<size;j++){
                if(nums[i]>nums[j]&&i!=j){
                    smaller[i]++;
                }
            }
        }
        return smaller;
        
    }
    
}