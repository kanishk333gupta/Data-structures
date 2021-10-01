#https://practice.geeksforgeeks.org/problems/linked-list-insertion-at-position/1/#

void insertAtPosition(Node *head, int pos, int data)
{
    //Your code here
    Node * temp =new Node(data) ;
    if(pos==1) {
        temp->next = head ;
    }
    Node * curr = head ;
    for(int i = 0 ; i <pos-1 && curr!=NULL; i++){
        curr = curr->next ;
    }
    if (curr == NULL) return ;
    temp -> next = curr->next ;
    curr->next = temp ;
    return  ;

}