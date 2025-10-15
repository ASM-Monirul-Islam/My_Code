class Solution {
public:
    int sum, rem;
    int addDigits(int num) {
        sum=0;
        while(num!=0) {
            rem = num%10;
            sum+=rem;
            num/=10;
        }
        if(sum/10 != 0) {
            return addDigits(sum);
        }
        return sum;
    }
};