#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int length1 = word1.length();
        int length2 = word2.length();
        int maxLength = max(length1, length2);
        string result = "";
        for(int index = 0; index < maxLength; index++){
            if(index < length1){
                result.push_back(word1[index]);
            }
            if(index < length2){
                result.push_back(word2[index]);
            }
        }
        return result;
    }
};

int main(){

}