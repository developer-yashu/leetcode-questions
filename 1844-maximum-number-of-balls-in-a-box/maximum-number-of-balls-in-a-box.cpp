class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
    int ball[50] = {};  // Initialize an array of size 50 with 0
        
        for (int i = lowLimit; i <= highLimit; i++) {
            int sum = 0, n = i;
            while (n) {
                sum += n % 10;  // Extract digits and sum
                n /= 10;
            }
            ++ball[sum];  // Increment count for the sum index
        }   

        return *std::max_element(std::begin(ball), std::end(ball));  
    }
};