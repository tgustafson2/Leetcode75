namespace p1004 {
    public class Solution {
        public int LongestOnes(int[] nums, int k) {
            int left = 0;
            int flip = 0;
            int result = 0;
            for(int i=0; i < nums.Length;){
                if(nums[i++] == 0) {
                    flip++;
                }
                while(flip > k){
                    if(nums[left++] == 0){
                        flip--;
                    }
                }
                result = int.Max(i-left, result);
            }
            return result;
        }
    }    
}