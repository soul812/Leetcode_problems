class Solution {
public:
    int height(TreeNode* root){
        if(!root)
            return 0;
        else{
            int l=height(root->left);
            int r=height(root->right);
        
        if(l>r)
            return l+1;
        else
            return r+1;
        }
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        int lenl=height(root->left);
        int lenh=height(root->right);
        
        if(abs(lenl-lenh)>1)
            return false;
        else
            return isBalanced(root->left)&&isBalanced(root->right);
    }
};
