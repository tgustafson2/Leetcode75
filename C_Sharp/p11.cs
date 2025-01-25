namespace p11 {
    public class Solution {
        public int MaxArea(int[] height) {
            int left = 0, right = height.Length-1;
            int result = 0;
            while(left < right){
                result = int.Max(result, int.Min(height[left], height[right])*(right-left));
                if(height[left] < height[right]){
                    left++;
                } else {
                    right--;
                }
            }
            return result;
        }
    }
}