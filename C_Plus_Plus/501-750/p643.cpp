#include <vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int result = numeric_limits<long>::lowest();
        int currSum = 0;
        int left = 0, right = 0;
        while(right < nums.size()){
            currSum += nums[right++];
            if(right - left == k){
                result = max(result, currSum);
                currSum -= nums[left++];
            }
        }
        return (double)result / k;
    }
};