// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int findMid(long long first, long long last) {
        return (first + last + 1) / 2;
    }
    
    int firstBadVersion(int n) {
        int first = 1, last = n, middle;
        long long ans = n+1ll;
        while (first <= last) {   
            middle = findMid(first, last);
            bool t = isBadVersion(middle);
            if (t) {
                ans = middle;
                last = middle - 1;
            }
            else {
                first = middle + 1;
            }
        }
        return ans;
    }
};