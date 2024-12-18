class Solution {
    public int[] runningSum(int[] nums) {
        int size = nums.length;
        int[] runningS = new int[size];
        for(int i=0;i<size;i++){
            int tempS= 0;
            for(int j=0;j<=i;j++){
                tempS+=nums[j];
            }
            runningS[i] = tempS;
        }
        return runningS;
    }
}