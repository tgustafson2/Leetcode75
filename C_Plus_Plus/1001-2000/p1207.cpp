#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_set<int> hash;
        for(int num : arr){
            mp[num]++;
        }
        for(const auto& [key, value] : mp){
            if(hash.contains(value)){
                return false;
            }
            hash.insert(value);
        }
        return true;
    }
};