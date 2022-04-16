//https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1#

void dead(Node* root , int l ,int r ,int &flag){
    if(root==NULL) return;
    if(flag==0) return ;
        if(l==r || r==1){ 
            flag = 0;
            return;
        }
    dead(root->left , l , root->data-1 , flag);
    dead(root->right , root->data+1 , r , flag);
}
bool isDeadEnd(Node *root)
{
    //Your code here
    int flag = 1 ;
    dead(root,INT_MIN,INT_MAX,flag);
    return !flag ;
    
}
