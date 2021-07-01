int getCount(struct Node* head){
        if(head == NULL){
            return 0;
        }
        Node* temp = head;
        int c = 1;
        while(temp->next != NULL){
            temp = temp->next;
            c++;
        }
        return c;
    }
