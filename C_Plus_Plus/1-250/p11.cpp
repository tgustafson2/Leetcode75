#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int result = 0;
        while(left < right){
            result = max(result, min(height[left], height[right])*(right-left));
            if(height[left] < height[right]){
                left++;
            } else {
                right--;
            }
        }
        return result;
    }
};