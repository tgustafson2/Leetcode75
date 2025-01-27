#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int result = 0;
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size()-1;
        while(left < right){
            if(nums[left] + nums[right] == k){
                left++;
                right--;
                result++;
            } else if(nums[left] + nums[right] < k){
                left++;
            } else {
                right--;
            }
        }
        return result;
    }
};



    //     int maxOperations(vector<int>& nums, int k) {
    //     int result = 0;
    //     unordered_map<int,int>mp;
    //     for(int i = 0; i < nums.size(); i++){
    //         if(mp[k-nums[i]] > 0){
    //             result++;
    //             mp[k-nums[i]]--;
    //         } else {
    //             mp[nums[i]]++;
    //         }
    //     }
    //     return result;
    // }