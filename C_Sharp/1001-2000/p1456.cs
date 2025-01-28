namespace p1456 {
    public class Solution {
        private int VowelMask = (1 << 1) | (1 << 5) | (1 << 9) | (1 << 15) | (1 << 21); 
        private bool isVowel(char c){
            return  (VowelMask &  (1 << (c  % 32))) != 0;
        }
        public int MaxVowels(string s, int k) {
            int currVowels = 0, maxVowels = 0;
            for(int left = 0, right = 0; right < s.Length;){
                if(isVowel(s[right++])){
                    currVowels++;
                }
                if(right - left > k){
                    currVowels -= isVowel(s[left++]) ? 1 : 0;
                }
                maxVowels = int.Max(currVowels, maxVowels);
            }
            return maxVowels;
        }
    }    
}