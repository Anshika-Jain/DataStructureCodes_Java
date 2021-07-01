void deleteAlt(struct Node *head){
    if(head == NULL || head->next == NULL){
        return;
    }
    Node* temp = head;
    while(temp != NULL && temp->next != NULL){
        temp->next = temp->next->next;
        temp = temp->next;
    }
}
