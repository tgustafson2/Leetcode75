#include <string>
#include <numeric>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        /**
         * @brief if str1 and str2 have a common divisor then the strings will contain the same pattern
         * this means the strings concatenated together should be the same no matter the order of
         * concatenation
         */
        if(str1+str2 != str2+str1){
            return "";
        }
        /**
         * @brief we know at this point that their is a common divisor. If we know there is a common divisor
         * we can then find the common divisors of their length and return a substring of that length
         */
        int resultLength = gcd(str1.length(), str2.length());
        return str1.substr(0, resultLength);
    }
};