
namespace p151{
    public class Solution {
        /** 
            C# doesn't allow in memory manipulation of strings so this solution becomes trivial
        */
        public string ReverseWords(string s) {
            return String.Join(' ', s.Split(' ', StringSplitOptions.RemoveEmptyEntries | StringSplitOptions.TrimEntries).Reverse());
        }
    }
}