#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
        vector<bool> result(candies.size(), false);
        for(int i=0; i<candies.size(); i++){
            max = max < candies[i] ? candies[i] : max;
        }
        max -= extraCandies;
        for(int i=0; i< result.size(); i++){
            result[i] = candies[i] >= max;
        }
        return result;
    }
};