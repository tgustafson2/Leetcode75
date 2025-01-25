#include <string>
#include <unordered_set>

using namespace std;

class Solution {
    bool checkVowel(char c){
        return c=='a' || c=='e' ||  c=='i' ||  c=='o' ||  c=='u' || 
            c=='A' ||  c=='E' ||  c=='I' ||  c=='O' ||  c=='U';
    }
public:
    /*Utilizes a two pointer approach for O(1) time*/
    string reverseVowels(string s) {
        int left = 0, right = s.length()-1;
        while(left < right){
            while(left < right && !checkVowel(s[left])){
                left++;
            }
            while(left < right && !checkVowel(s[right])){
                right--;
            }
            if(checkVowel(s[left]) && checkVowel(s[right])){
                swap(s[left], s[right]);
            }
            left++;
            right--;
        }
        return s;
    }
};