namespace p1657 {
    public class Solution {
        public bool CloseStrings(string word1, string word2) {
            if(word1.Length != word2.Length){
                return false;
            }
            int [] w1 = new int [26];
            int [] w2 = new int [26];

            for(int i=0; i < word1.Length; i++){
                w1[word1[i]-'a']++;
                w2[word2[i]-'a']++;
            }

            for(int i = 0; i < 26; i++){
                if(w1[i] > 0 && w2[i] == 0){
                    return false;
                }
                if(w2[i] > 0 && w2[i] == 0){
                    return false;
                }
            }

            Array.Sort(w1);
            Array.Sort(w2);
            return w1.SequenceEqual(w2);
        }
    }    
}