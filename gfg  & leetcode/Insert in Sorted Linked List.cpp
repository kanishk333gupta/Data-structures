#https://practice.geeksforgeeks.org/problems/insert-in-sorted-linked-list/1/#


Node * insertInSorted(Node * head, int p)
{
    //Your code here
    Node * temp =new Node(p) ;
    if(head == NULL) return temp ;
    if(p < (head->data)){
        temp->next = head;
        return temp ;
    }
    Node * curr = head ;
    while (curr!=NULL && curr->next!=NULL && curr->next->data < p){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head ;
}
