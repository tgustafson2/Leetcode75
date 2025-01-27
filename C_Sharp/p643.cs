
namespace p643.cs {
    public class Solution {
        public double FindMaxAverage(int[] nums, int k) {
            int result = int.MinValue;
            int currSum = 0;
            int left = 0, right = 0;
            while(right < nums.Length){
                currSum += nums[right++];
                if(right - left == k){
                    result = int.Max(result, currSum);
                    currSum -= nums[left++];
                }
            }
            return (double)result / k;
        }
    }   
}