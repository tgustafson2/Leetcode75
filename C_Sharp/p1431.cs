
namespace p1431 {
    public class Solution {
        public IList<bool> KidsWithCandies(int[] candies, int extraCandies) {
            bool[] result = new bool[candies.Length];
            int max = int.MinValue;
            for(int i=0; i < candies.Length; i++){
                max = max < candies[i] ? candies[i] : max;
            }
            max -= extraCandies;
            for(int i=0; i < candies.Length; i++){
                result[i] = candies[i] >= max;
            }
            return result;
        }
    }
}