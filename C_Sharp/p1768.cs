public class Solution {
    public string MergeAlternately(string word1, string word2) {
        int length1 = word1.Length;
        int length2 = word2.Length;
        int maxL = Math.Max(length2, length1);
        string result = "";
        for(int index = 0; index < maxL; index++){
            if(index < length1){
                result += word1[index];
            }
            if(index < length2){
                result += word2[index];
            }
        }
        return result;
    }
}