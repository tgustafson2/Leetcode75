using System.Numerics;

namespace p1071{
    public class Solution {
        public string GcdOfStrings(string str1, string str2) {
            if(str1+str2 != str2 + str1){
                return "";
            }
            int resultLength = ((int)BigInteger.GreatestCommonDivisor(str1.Length, str2.Length));
            return str1.Substring(0,resultLength);
        }
    }
}
