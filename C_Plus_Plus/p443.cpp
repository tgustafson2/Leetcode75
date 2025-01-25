#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * @brief We use a modified sliding window approach where instead of two pointer we use
     * a char representing the start of the window to optimize lookup time
     * 
     * @param chars 
     * @return int 
     */
    int compress(vector<char>& chars) {
        char curr;
        int write = 0, read = 0;
        int size = chars.size();
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
                string length = to_string(count);
                for (char c : to_string(count)){
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};