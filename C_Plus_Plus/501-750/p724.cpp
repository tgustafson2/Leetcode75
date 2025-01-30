#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long pre = 0;
        long post = 0;
        int result = -1;
        for(int num : nums){
            pre += num;
        }
        for(int i = nums.size() - 1; i >= 0; i--){
            pre -= nums[i];
            result = pre == post ? i : result;
            post += nums[i];
        }
        return result;
    }
};