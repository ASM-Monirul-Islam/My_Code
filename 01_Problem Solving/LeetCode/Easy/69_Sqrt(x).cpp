// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         while(n!=1) {
//             if(n<1) return false;
//             if(n%2==1) return false;
//             n/=2;
//         }
//         return true;
//     }
// };

class Solution {
public:
    int mySqrt(int x) {
        if(x==1 or x==0) return x;
        int left=0, right=x, mid, ans;
        while(left<=right) {
            mid=(left+right)/2;
            if(mid == x/mid) {
                ans=mid;
                break;
            }else if(mid < x/mid) {
                ans=mid;
                left=mid+1;
            }else {
                right=mid-1;
            }
        }
        return ans;
    }
};