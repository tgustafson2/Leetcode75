#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result = 0;
        int curr = 0;
        for(int i = 0; i < gain.size(); i++){
            curr += gain[i];
            result = max(curr, result);
        }
        return result;
    }
};