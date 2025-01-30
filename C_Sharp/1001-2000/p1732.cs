namespace p1732 {
    public class Solution {
        public int LargestAltitude(int[] gain) {
            int result = 0;
            int curr = 0;
            for(int i = 0; i < gain.Length; i++){
                curr += gain[i];
                result = int.Max(curr, result);
            }
            return result;
        }
    }    
}