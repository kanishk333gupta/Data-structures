#https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1/#

class Solution{
    public:
    int height(struct Node* node){
        if(node==NULL) return 0;
        // count++;
        // int a=height(node->left);
        // int b=height(node->right);
        // int count=0;
        // helper(node,count);
        // return count;
        // return max(a,b)+1;
        return (max(height(node->left),height(node->right)))+1;
    }
};