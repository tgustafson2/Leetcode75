#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @brief We take a greedy approach where whenever an array element is less
     * than either num1 or num2 we set it to that element, if the element is not less than
     * our 2 numbers we have reached the goal condition
     * 
     * @param nums 
     * @return true 
     * @return false 
     */
    bool increasingTriplet(vector<int>& nums) {
        int num1 = INT_MAX;
        int num2 = INT_MAX;
        for(int num : nums){
            if(num1 >= num)num1 = num;
            else if(num2 >= num) num2 = num;
            else return true;
        }
        return false;
    }
};