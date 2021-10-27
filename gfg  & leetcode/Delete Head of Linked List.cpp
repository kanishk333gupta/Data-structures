#https://practice.geeksforgeeks.org/problems/delete-head-of-linked-list/1/#

Node * deleteHead(Node *head)
{
    //Your code here
    if(head==NULL) return NULL ;
    else {
    Node * temp = head->next ;
    delete head ;
    return temp;
    }
}
