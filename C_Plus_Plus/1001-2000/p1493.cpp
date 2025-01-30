#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int flip = 0;
        int result = 0;
        for(int i=0; i < nums.size();){
            if(nums[i++] == 0) {
                flip++;
            }
            while(flip > 1){
                if(nums[left++] == 0){
                    flip--;
                }
            }
            result = max(i-left-flip, result);
        }
        if(result == nums.size()){
            result--;
        }
        return result;
    }
};