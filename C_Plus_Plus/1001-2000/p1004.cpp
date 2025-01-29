#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @brief We use a sliding window approach where as long as the condition is
     * still valid we expand the window. Once the condition is false we shrink the window
     * till it is once again valid
     * 
     * @param nums 
     * @param k 
     * @return int 
     */
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int flip = 0;
        int result = 0;
        for(int i=0; i < nums.size();){
            if(nums[i++] == 0) {
                flip++;
            }
            while(flip > k){
                if(nums[left++] == 0){
                    flip--;
                }
            }
            result = max(i-left, result);
        }
        return result;
    }
};