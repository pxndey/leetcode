class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        string newS = "";

        for(int i=0;i<len;i++){
            if(isalnum(s[i])){
                newS+=tolower(s[i]);
            }
        }
        std::cout<<newS;
        int left = 0;
        int right = newS.length()-1;
        while (left<=right){
            if (newS[left]!=newS[right]){
                return false;
            } else {
                left++;
                right--;
            }
        }

        return true;
    }
};