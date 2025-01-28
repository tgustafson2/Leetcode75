namespace p345{
    public class Solution {
        public string ReverseVowels(string s) {
            int left = 0, right = s.Length-1;
            char[] swapArray = s.ToCharArray();
            while(left < right){
                while(left < right && !checkVowel(s[left])){
                    left++;
                }
                while(left < right && !checkVowel(s[right])){
                    right--;
                }
                if(checkVowel(s[left]) && checkVowel(s[right])){
                    char temp = swapArray[left];
                    swapArray[left] = swapArray[right];
                    swapArray[right] = temp;
                }
                left++;
                right--;
            }
            return new string(swapArray);
        }
        bool checkVowel(char c){
            return c=='a' || c=='e' ||  c=='i' ||  c=='o' ||  c=='u' || 
                c=='A' ||  c=='E' ||  c=='I' ||  c=='O' ||  c=='U';
        }
    }    
}