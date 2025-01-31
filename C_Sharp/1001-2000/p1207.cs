namespace p1207 {
    public class Solution {
        public bool UniqueOccurrences(int[] arr) {
            Dictionary<int,int> mp = new Dictionary<int, int> ();
            HashSet<int>hash = new HashSet<int>();
            foreach (int num in arr)
            {
                mp.TryGetValue(num, out int curr);
                mp[num] = curr + 1;
            }
            return mp.Select(x => x.Value).Distinct().ToArray().Length == mp.Count();
        }
    }    
}