#https://practice.geeksforgeeks.org/problems/preorder-traversal/1#


// vector<int>v;
// void helper (Node* root ){
// //   vector<int> v ;
//     if(root!=NULL) {
//         v.push_back(root->data);
//         helper(root->left);
//         helper(root->right);
//     }return;
// }
// vector <int> preorder(Node* root)
// {
//     helper(root);
//     return v;
// };

vector <int> preorder(Node* root)
{
    stack<Node*>s;
    s.push(root);
    vector<int>v;
    while(!s.empty()){
        Node *curr  = s.top() ;
        v.push_back(curr->data);
        s.pop();
        if(curr->right) s.push(curr->right);
        if(curr->left) s.push(curr->left);
    }return v;
} 
