namespace p724 {
    public class Solution {
        public int PivotIndex(int[] nums) {
            long pre = 0;
            long post = 0;
            int result = -1;
            foreach(int num in nums){
                pre += num;
            }
            for(int i = nums.Length - 1; i >= 0; i--){
                pre -= nums[i];
                result = pre == post ? i : result;
                post += nums[i];
            }
            return result;
        }
    }    
}