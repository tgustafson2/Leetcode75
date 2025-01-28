namespace p392 {
    public class Solution {
        public bool IsSubsequence(string s, string t) {
            int n = s.Length, m = t.Length, i=0, j=0;
            for (; i<n && j<m; j++) {
                if (s[i] == t[j]) i++;
            }
            
            return i == n;
        }
    }
}