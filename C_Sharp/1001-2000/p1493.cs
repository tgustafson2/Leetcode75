namespace p1493 {
    public class Solution {
        public int LongestSubarray(int[] nums) {
            int left = 0;
            int flip = 0;
            int result = 0;
            for(int i=0; i < nums.Length;){
                if(nums[i++] == 0) {
                    flip++;
                }
                while(flip > 1){
                    if(nums[left++] == 0){
                        flip--;
                    }
                }
                result = int.Max(i-left-flip, result);
            }
            if(result == nums.Length){
                result--;
            }
            return result;
        }
    }    
}