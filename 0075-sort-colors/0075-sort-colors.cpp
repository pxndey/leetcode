class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)==0) zeroCount++;
            if(nums.at(i)==1) oneCount++;
            if(nums.at(i)==2) twoCount++;
        }
        vector<int> v;
        for(int i=0;i<zeroCount;i++){
            v.push_back(0);
        }
        for(int i=0;i<oneCount;i++){
            v.push_back(1);
        }
        for(int i=0;i<twoCount;i++){
            v.push_back(2);
        }
        nums = v;
    }
};