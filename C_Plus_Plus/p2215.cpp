#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>result(2,vector<int>(0));
        unordered_set<int>hash1;
        unordered_set<int>hash2;
        for(int i=0; i<nums1.size(); i++){
            hash1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            hash2.insert(nums2[i]);
        }
        for(int num : hash1){
            if(!hash2.contains(num)){
                result[0].push_back(num);
            }
        }
        for(int num: hash2){
            if(!hash1.contains(num)){
                result[1].push_back(num);
            }
        }
        return result;
    }
};