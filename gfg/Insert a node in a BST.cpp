#https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1

Node* insert(Node* root, int key) {
    // Your code here
    Node *temp = new Node(key);
    if(root==NULL) return temp;
    if(root->data==key) return root;
    else if(root->data > key) root->left=insert(root->left,key);
    else root->right=insert(root->right,key);
    return root;
}
