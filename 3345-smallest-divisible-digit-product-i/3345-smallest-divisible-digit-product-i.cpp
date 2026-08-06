class Solution {
public:
    int smallestNumber(int n, int t) {
        int num=n;
        while(true){
            int prd=1;
            int i=num;
            while(i>0){
                prd=prd*(i%10);
                i=i/10;
            }
            if(prd%t==0){
                return num;
                break;
            }
            num++;
        }
        
    }
};