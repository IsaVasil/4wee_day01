#include "zad01.07.h"

int main() {
    /*Node *my_head_1 = NULL;
    push_back(&my_head_1, 100);
    pop_front(&my_head_1);*/
    Node *head_linked_list_1=NULL;
    push_front(&head_linked_list_1,999);
    push_back(&head_linked_list_1,100);
    push_back(&head_linked_list_1,200);
    push_back(&head_linked_list_1,300);
    push_front(&head_linked_list_1,1);
    push_front(&head_linked_list_1,2);
    pop_back(&head_linked_list_1);
    print_ll(head_linked_list_1);
}