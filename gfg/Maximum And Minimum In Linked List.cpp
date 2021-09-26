#https://practice.geeksforgeeks.org/problems/maximum-and-minimum-in-linked-list/1/#


int maximum(Node *head)
{
    Node * curr = head ;
    int m = curr->data ;
    //curr = curr->next ;
    while(curr!=NULL){
        if(m<(curr->data)) m=(curr->data);
        curr = curr->next ;
        }return m ;
}

int minimum(Node *head)
{
    Node * curr = head ;
    int s = curr->data ;
    //curr = curr -> next ;
    while(curr!=NULL){
        if(s > (curr->data)) s=curr->data;
        curr = curr->next ;
        }return s ;
}