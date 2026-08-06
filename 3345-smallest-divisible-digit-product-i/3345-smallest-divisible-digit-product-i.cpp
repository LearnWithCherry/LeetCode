class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int cur = n ; ; ++cur){
            int prd = 1;
            int temp = cur;

            while(temp > 0){
                prd *= (temp%10);
                temp /= 10;
            }
            if(prd % t == 0){
                return cur;
            }
        }
    }
};