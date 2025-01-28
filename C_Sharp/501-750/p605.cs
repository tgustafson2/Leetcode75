namespace p605 {
    public class Solution {
        public bool CanPlaceFlowers(int[] flowerbed, int n) {
            if(flowerbed.Length == 1){
                return flowerbed[0] == 0 || n==0;
            }
            if(n > flowerbed.Length/2 +1)return false;
            int i = 1;
            if(flowerbed[0] == 0 && flowerbed[1] == 0){
                n--;
                i++;
            } else if(flowerbed[0] == 1){
                i++;
            }
            for( ; i<flowerbed.Length-1; ){
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
            if(i == flowerbed.Length-1 && flowerbed[i-1] == 0 && flowerbed[i] == 0){
                n--;
            }
            return n <= 0;
        }
    }
}