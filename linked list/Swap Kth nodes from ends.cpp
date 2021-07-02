Node *swapkthnode(Node* head, int num, int k)
{
   if(head == NULL || k < 1 || k > num || 2*k - 1 == num){
       return head;
    }else{
       Node* temp1 = head;
       Node* prev1 = NULL;
       Node* temp2 = head;
       Node* prev2 = NULL;
       
       for(int i = 0 ; i < k-1 ; i++){
           prev1 = temp1;
           temp1 = temp1->next;
       }
       
       
       for(int i = 0 ; i < (num-k) ; i++){
           prev2 = temp2;
           temp2 = temp2->next;
       } 
       
       if(prev1 != NULL){
           prev1->next = temp2;
       }
       
       if(prev2 != NULL){
           prev2->next = temp1;
       }
       
        
       Node* temp = temp1->next;
       temp1->next = temp2->next;
       temp2->next = temp;
      
       if(k == 1){
           head = temp2;
       }else if(k == num){
           head = temp1;
       }
   }
   
   
    return head;
