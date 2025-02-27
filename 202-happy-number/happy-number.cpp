// class Solution {
// public:
//     bool isHappy(int n) {
//         int x=0;
//         while(n>0){
//             x+=(n%10)*(n%10);
//             n/=10;
//         }
//         return x;
//     }
//     bool ishappy(int n){
//         while(n>4){
//             n=sumofdigit(n);
//         }
//         return n==1;
//     }
// };


class Solution {
public:
    int sumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        while (n != 1 && n != 4) {  
            n = sumOfSquares(n);
        }
        return n == 1;
    }
};
