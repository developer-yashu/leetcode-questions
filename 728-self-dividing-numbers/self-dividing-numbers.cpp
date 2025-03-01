class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> new_arr;
        
        for(int i = left; i <= right; i++) {
            int temp = i;
            bool isSelfDividing = true;
            
            while(temp) {
                int digit = temp % 10;
                if (digit == 0 || i % digit != 0) {
                    isSelfDividing = false;
                    break;
                }
                temp /= 10;
            }
            
            if(isSelfDividing) {
                new_arr.push_back(i);
            }
        }
        return new_arr;
    }
};
