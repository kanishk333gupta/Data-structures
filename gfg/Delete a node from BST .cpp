//https://practice.geeksforgeeks.org/problems/delete-a-node-from-bst/1#

Node* findlast(Node* root){
        if(root->right==NULL) return root;
        return findlast(root->right);
    }
    Node* helper(Node* root){
        if(root->left==NULL) return root->right;
        else if(root->right==NULL) return root->left;
        Node* rightChild = root->right;
        Node* lastRight = findlast(root->left);
        lastRight->right = rightChild;
        return root->left;
    }
Node *deleteNode(Node *root, int key) {
    // your code goes here
    if(root==NULL) return NULL ; 
        if(root->data == key ) return helper(root);
        
        Node* res = root;
        while(root){
            if(root->data > key){
                if(root->left!=NULL && root->left->data==key){
                    root->left = helper(root->left);
                    break;
                }else root = root->left;
                
            }else{
                if(root->right!=NULL && root->right->data==key){
                    root->right = helper(root->right);
                    break;
                }else root = root->right;
            }
        }
        return res;
    
    
}


