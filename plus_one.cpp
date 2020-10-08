class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0,flag=0,a;
        for(int i=digits.size()-1;i>=0;i--){
            if(!flag){
                a = digits[i]+1;
                flag++;
            }else{
                a = digits[i]+carry;
            }
            carry=a/10;
            digits[i]=a%10;
        }
        if(carry){
            digits.push_back(0);
            for(int i=digits.size()-1;i>0;i--){
                digits[i]=digits[i-1];
            }
            digits[0]=1;
        }
        return digits;
    }
};
