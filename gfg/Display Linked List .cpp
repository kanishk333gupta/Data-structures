#https://practice.geeksforgeeks.org/problems/display-linked-list/1/#

vector<int> displayList(Node *head)
{
    vector<int>v;
    Node *curr = head ;
    while(curr!=NULL){
        v.push_back(curr -> data);
        curr = curr -> next;
    }return v;
}