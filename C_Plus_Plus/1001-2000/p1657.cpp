#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @brief For this problem we can freely rearrange the string characters and
     * swap all occurrences of a character with the instances of another character
     * 
     * @param word1 
     * @param word2 
     * @return true 
     * @return false 
     */
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()){
            return false;
        }
        vector<int> w1(26,0);
        vector<int> w2(26,0);
        //creating dictionaries showing the frequency of each character
        for(int i=0; i < word1.size(); i++){
            w1[word1[i]-'a']++;
            w2[word2[i]-'a']++;
        }
        //checking that both strings use the same sets of characters
        for(int i = 0; i < 26; i++){
            if(w1[i] > 0 && w2[i] == 0){
                return false;
            }
            if(w2[i] > 0 && w2[i] == 0){
                return false;
            }
        }
        //If each string has the same number of occurrences for a different chars
        //we can swap occurrences to make them match
        sort(w1.begin(), w1.end());
        sort(w2.begin(), w2.end());
        for(int i = 0; i < 26; i++){
            if(w1[i] != w2[i]){
                return false;
            }
        }
        return true;
    }
};