#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @brief Use a prefix array approach. First compute the product of every element before
     * the current element. Then we can use a single variable to keep track of the suffix.
     * We iterate over the array again calculating the suffix by multiplying it by the previous
     * element in the original array then we multiply the current element by the suffix
     * 
     * @param nums 
     * @return vector<int> 
     */
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> result(size, 1);
        for(int i = 1; i < size; i++){
            result[i] = result[i-1] * nums[i-1];
        }
        int suffix = 1;
        for(int i = size - 2; i >= 0; i--){
            suffix *= nums[i+1];
            result[i] *= suffix;
        }
        return result;
    }
};