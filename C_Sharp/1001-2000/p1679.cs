using System.Collections.Immutable;

namespace p1679 {
    public class Solution {
        public int MaxOperations(int[] nums, int k) {
            int result = 0;
            Dictionary<int,int> mp = new Dictionary<int, int>();
            foreach(int num in nums){
                int count;
                if(mp.TryGetValue(k-num, out count) && count > 0){
                    mp[k-num]--;
                    result++;
                } else {
                    mp.TryGetValue(num, out count);
                    mp[num] = count + 1;
                }
            }
            return result;
        }
    }    
}
        // Used immutable array to speed up array scan
        // public int MaxOperations(int[] nums, int k) {
        //     Array.Sort(nums);
        //     int result = 0;
        //     ImmutableArray<int> nums2 = nums.ToImmutableArray();
        //     int left = 0, right = nums.Length - 1;
        //     while(left < right){
        //         if(nums2[left] + nums2[right] == k){
        //             left++;
        //             right--;
        //             result++;
        //         } else if(nums2[left] + nums2[right] < k){
        //             left++;
        //         } else {
        //             right--;
        //         }
        //     }
        //     return result;
        // }