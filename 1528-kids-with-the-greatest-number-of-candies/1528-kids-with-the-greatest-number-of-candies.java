class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max = candies[0];
        for(int i=0;i<candies.length;i++){
            if(candies[i]>max){
                max = candies[i];
            }
        }
        
        List<Boolean> maxCandy = new ArrayList<Boolean>();
        
        for(int j=0;j<candies.length;j++){
            if(candies[j]+extraCandies>=max){
                maxCandy.add(true);
            }
            else{
                maxCandy.add(false);
            }
        }
        
        return maxCandy;
    }
}