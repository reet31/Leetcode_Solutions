class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int m1=INT_MIN;
        int m2=INT_MIN;
        int m3=INT_MIN;

        int s1=INT_MAX;
        int s2=INT_MAX;

        for(int num:nums){
            if(num>=m1){
                m3=m2;
                m2=m1;
                m1=num;
            }else if(num>=m2){
                m3=m2;
                m2=num;
            }else if(num>=m3){
                m3=num;
            }
            if(num<=s1){
                s2=s1;
                s1=num;
            }else if(num<=s2){
                s2=num;
            }
        }
        int a=m1*m2*m3;
        int b=s1*s2*m1;
        return max(a,b);
        
    }
};