#https://practice.geeksforgeeks.org/problems/search-in-linked-list/1/

bool searchLinkedList(Node *head, int x)
{
    //Your code here
    Node * curr = head ;
    while (curr!=NULL){
        if (x == curr->data) return true ;
        curr = curr->next ;
    }return false ;
}