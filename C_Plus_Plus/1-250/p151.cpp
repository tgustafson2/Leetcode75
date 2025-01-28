#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @brief By reversing the initial string you can take advantage of a sliding window
     * approach to then reverse each word again to get the correct order
     * 
     * @param s 
     * @return string 
     */
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int size = s.size();
        int left = 0, right = 0;
        int index = 0;
        while(index < size){
            while(index < size && s[index] == ' '){
                index++;
            }
            if(index == size) break;
            while(index < size && s[index] != ' '){
                s[right++] = s[index++];
            }
            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            index++;
        }
        s.resize(right-1);
        return s;
    }
};