class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posArray;
        vector<int> negArray;
        vector<int> mainArray;
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)>0) posArray.push_back(nums.at(i));
            if(nums.at(i)<0) negArray.push_back(nums.at(i));
        }
        for(int i=0;i<posArray.size();i++){
            mainArray.push_back(posArray.at(i));
            mainArray.push_back(negArray.at(i));
        }
        return mainArray;
    }
};