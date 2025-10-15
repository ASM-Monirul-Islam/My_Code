class Solution {
public:
    int rem;
    int reverse(int x) {
        long long reverse_num=0;
        while(x!=0) {
            rem = x%10;
            reverse_num=(reverse_num*10) +rem;
            x/=10;
        }
        if(reverse_num>INT_MAX or reverse_num<INT_MIN) return 0;
        return (int)reverse_num;
    }
};
