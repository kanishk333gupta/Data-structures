#https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1/#

bool search(Node* root, int x) {
    // Your code here
    Node *curr=root;
    if(!curr) return false;
    if(curr->data==x) return true;
    else if(curr->data < x) return search(curr->right , x);
    else return search(curr->left , x);
    
}