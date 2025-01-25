namespace p443 {
    public class Solution {
        public int Compress(char[] chars) {
            char curr;
            int write = 0, read = 0;
            int size = chars.Length;
            int count;
            while(read < size) {
                curr = chars[read];
                count = 0;
                while(read < size && curr == chars[read]) {
                    read++;
                    count++;
                }
                chars[write++] = curr;
                
                if(count > 1){
                    string length = count.ToString();
                    foreach (char c in count.ToString()){
                        chars[write++] = c;
                    }
                }
            }
            return write;
        }
    }
}