class Solution {
public:
    int reverse(int x) {
        long sum = 0;
        while (x) {
            int rev = x % 10;
            sum = sum * 10 + rev;
            x = x / 10;
        }
         if (sum > INT_MAX || sum < INT_MIN) {
            return 0;
        }
        return static_cast<int>(sum);
    }
};
