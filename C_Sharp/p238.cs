namespace p238 {
 public class Solution {
        public int[] ProductExceptSelf(int[] nums) {
            int[] result = new int [nums.Length];
            result[0] = 1;
            for(int i = 1; i < nums.Length; i++){
                result[i] = result[i-1] * nums[i-1];
            }
            int suffix = 1;
            for(int i = nums.Length-2; i >= 0; i--){
                suffix *= nums[i+1];
                result[i] *= suffix;
            }
            return result;
        }
    }   
}