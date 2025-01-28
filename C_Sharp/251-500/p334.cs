namespace p334 {
    public class Solution {
        public bool IncreasingTriplet(int[] nums) {
            int num1 = int.MaxValue;
            int num2 = int.MaxValue;
            foreach(int num in nums){
                if(num1 >= num)num1 = num;
                else if(num2 >= num) num2 = num;
                else return true;
            }
            return false;
        }
    }
}