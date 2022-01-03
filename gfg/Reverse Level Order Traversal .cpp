#https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    queue<Node*>q;
    stack<int>s;
    vector<int>v;
    q.push(root);
    while(!q.empty()){
        Node *curr = q.front();
        q.pop();
        s.push(curr->data);
        if(curr->right) q.push(curr->right);
        if(curr->left) q.push(curr->left);
    }
    while(!s.empty()) {
        v.push_back(s.top());
        s.pop();
    }
    return v;
    
}