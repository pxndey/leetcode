class Solution {
public:
    int fib(int n) {
        int last = 1;
        int secondLast = 0;
        if(n==0) return secondLast;
        if(n==1) return last;
        int fib = 0;
        for(int i=2;i<=n;i++){
            fib = last + secondLast;
            secondLast = last;
            last = fib;
        }
        return fib;
    }

};