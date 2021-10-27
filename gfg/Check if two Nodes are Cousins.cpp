#https://practice.geeksforgeeks.org/problems/check-if-two-nodes-are-cousins/1#

int height(Node* root , int a , int level){
        if(!root) return 0;
        if(root->data == a) return level ; 
        return max(height(root->left , a , level+1 ),height(root->right , a , level + 1));
    } 
    int parentCheck(Node* root , int b){
        if(!root) return 0;
        if(root->left && root->left->data==b || root->right && root->right->data==b) return root->data;
        return max(parentCheck(root->left,b),parentCheck(root->right,b));
    }
    bool isCousins(Node* root, int x, int y) {
        // if(root==NULL) return false;
        if(height(root,x,0) == height(root,y,0) && parentCheck(root,x) != parentCheck(root,y)) return true;
        return false;
    }