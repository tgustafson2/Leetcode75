namespace p283 {
    public class Solution {
        public void MoveZeroes(int[] nums) {
            int write = 0, read = 0;
            for( ; read < nums.Length; read++){
                    if(nums[read] != 0){
                        int temp = nums[write];
                        nums[write++] = nums[read];
                        nums[read] = temp;  
                    }
            }             
        }
    }    
}