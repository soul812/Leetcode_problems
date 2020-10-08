class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(!nums.size())
            return 0;
        int i=0,j=nums.size()-1,t;
        while(i<=j){
            if(nums[i]==val){
                t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
                j--;
            }
            else{
                i++;
            }
                
        }
        return i;
    }
};
