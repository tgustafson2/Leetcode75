#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size(), i=0, j=0;
        for (; i<n && j<m; j++) {
            if (s[i] == t[j]) i++;
        }
        
        return i == n;
    }
};