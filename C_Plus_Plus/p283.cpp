#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @brief Use a two pointer approach with one pointer keeping track of the current
     * location where the next non zero will go and the other pointer reading each element
     * in the array
     * 
     * @param nums 
     */
    void moveZeroes(vector<int>& nums) {
       int write = 0, read = 0;
       for( ; read < nums.size(); read++){
            if(nums[read] != 0){
                swap(nums[write++], nums[read]);
            }
       } 
    }
};