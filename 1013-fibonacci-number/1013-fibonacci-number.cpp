class Solution {
public:
    int fib(int n) {
        vector<int> v;
        v.push_back(0);
        v.push_back(1);
        int temp;
        for(int i=2;i<=n;i++){
            temp = v.at(i-1)+v.at(i-2);
            v.push_back(temp);
        } 
        return v.at(n);
    }
};