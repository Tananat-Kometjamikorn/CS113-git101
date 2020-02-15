//6210406581 Mr.Tananat Kometjamikorn
#include <stdio.h> 
#include <stdlib.h> 
struct list{
        int num;
        struct list *next;   
    };
void insert_front(struct list **head, int input);
void insert_between(struct list *tmp, int input);
void insert_last(struct list **head, struct list **tail, int input);
int main() {
    int input;
    struct list *head=NULL, *tail=NULL, *tmp, *prev;
    while (scanf("%d",&input) == 1) {
        if (input <= -1)
        break;
        else if (head!= NULL && input <= (head->num)){
            insert_front(&head,input);
        }
        else if(head == NULL || input >= tail->num){
            insert_last(&head,&tail,input);
        }
        else{
        for (tmp=head; tmp; tmp=tmp->next){
            if ((tmp->num) > input)
                break;
            prev = tmp;
            }
            if (tmp){
                insert_between(prev,input);  
            }
        }
    }
    for (tmp=head; tmp; tmp = tmp->next)
        printf("%d\n", tmp->num);
    return 0;
}
void insert_front(struct list **head, int input)
{
    struct list *new_list = (struct list *)malloc(sizeof(struct list));
    new_list->num = input;
    new_list->next = *head;
    *head = new_list;
}
void insert_between(struct list *tmp, int input)
{
    struct list *new_list = (struct list *)malloc(sizeof(struct list));
    new_list->num = input;
    new_list->next = tmp->next;
    tmp->next = new_list;
}
void insert_last(struct list **head, struct list **tail, int input)
{
      if (*head == NULL)
         *head = *tail = (struct list *)malloc(sizeof(struct list));
      else {
         (*tail)->next = (struct list *)malloc(sizeof(struct list));
         *tail = (*tail)->next;
      }
      (*tail)->num = input;
      (*tail)->next = NULL;
}