class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        for(int i=0;i<names.length;i++){
            for(int j=i;j<names.length;j++){
                if(heights[j]>heights[i]){
                    int temp = heights[j];
                    heights[j] = heights[i];
                    heights[i] = temp;
                    
                    String temp2 = names[j];
                    names[j] = names[i];
                    names[i] = temp2;
                }
            }
        }
        return names;
    }
}