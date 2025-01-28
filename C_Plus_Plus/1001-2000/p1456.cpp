#include <string>
#include <algorithm>

using namespace std;

class Solution {
    bool isVowel(char c) {
        return (0x208222>>(c&0x1f))&1;//magic constant
    }
public:
    int maxVowels(string s, int k) {
        int currVowels = 0, maxVowels = 0;
        for(int left = 0, right = 0; right < s.size(); ){
            if(isVowel(s[right++])){
                currVowels++;
            }
            if(right - left > k){
                currVowels -= isVowel(s[left++]) ? 1 : 0;
            }
            maxVowels = max(currVowels, maxVowels);
        }
        return maxVowels;
    }
};