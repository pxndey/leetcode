class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int f;
        f =0;
        for(int i=0;i<operations.length;i++){
            String operation = operations[i];
            if((operation.charAt(1))=='-'){
                f--;
            }
            else if((operation.charAt(1))=='+'){
                f++;
            }
        }
        return f;
    }
}