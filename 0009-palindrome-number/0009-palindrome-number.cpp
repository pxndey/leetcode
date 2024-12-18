class Solution {
public:
    bool isPalindrome(int x) {
        int xx =x;
        if(x<0) return false;
        int val = 0;
        int temp;
        while(true){
            temp = x % 10;
            x = x/10;
            val +=temp;
            if(x==0) break;
            if((val<INT_MIN/10) || (val>INT_MAX/10)) return 0;
            val*=10;
        }
        std::cout<<val;
        return (xx==val);
    }
};