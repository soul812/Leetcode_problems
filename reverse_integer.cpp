class Solution {
public:
    int reverse(int x) {
        if(x==-2147483648)
            return 0;
        int flag=0;
        if(x<0){
            flag=1;
            x=x*-1;
        }
        int y=0,a;
        long long int z;
        while(x){
            a=x%10;
            if(y>214748364)
                return 0;
            y=y*10;
            y=y+a;
            x=x/10;
        }
        if(flag)
            y=y*-1;
        return y;
    }
};
