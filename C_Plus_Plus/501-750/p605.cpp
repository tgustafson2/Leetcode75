#include <vector>
using namespace std;

class Solution {
public:
    /**
     * @brief I performed basic optimization by reducing the elements needed to check
     * knowing that no new flowers can be planted next to a flower we jump forward 2 spaces
     * if it is already occupied or we plant a new flower. If neither of those happen and the
     * next space contains a flower we jump forward 3 spaces as we know the next 2 are not
     * available.  This also allows us to not update the input array to keep track of planted flowers
     * 
     * @param flowerbed 
     * @param n 
     * @return true 
     * @return false 
     */
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() == 1){
            return flowerbed[0] == 0 || n==0;
        }
        if(n > flowerbed.size()/2 +1)return false;
        int i = 1;
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            n--;
            i++;
        } else if(flowerbed[0] == 1){
            i++;
        }
        for( ; i<flowerbed.size()-1; ){
            if(flowerbed[i] == 1){
                i += 2;
            } else if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                n--;
                i += 2;
            } else if (flowerbed[i-1] == 0) {
                i += 3;
            } else {
                i++;
            }
        }
        if(i == flowerbed.size()-1 && flowerbed[i-1] == 0 && flowerbed[i] == 0){
            n--;
        }
        return n <= 0;
    }
};