/*

func(n) ==> answer for n steps

func(n) = func(n-1) + func(n-2)

func(5) = func(4) + func(3) = (func(3) + func(2)) + (func(2) + func(1)) =

*/

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        int last = 2, secLast = 1;
        for(int i=3; i<=n; ++i) {
            int res = last + secLast;
            secLast = last;
            last = res;
        }
        return last;
    }
};