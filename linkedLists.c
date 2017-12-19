#include <stdio.h>
#include <stdlib.h>
typedef struct person{
  int age;
  int height;
  struct person * next;
}person;

int main(){
  int i;
  int a, b;
  person * head = malloc(sizeof(person));
  head -> next = NULL;
  person * current = malloc(sizeof(person));
  current = NULL;

  current = head ;
/* Stores each pair (a,b) in a new node of the linked list */
while(scanf("%d %d", &a, &b) ==2){
  /* When you want to stop storing insert (0,0)*/
  if( a == 0 && b == 0) break;
  /*Goes through the list until it reaches the last element */
  while ( current->next != NULL ){
    current = current -> next;
  }
  /* We are now in the last element, therefore we ca add it */
  /* Before saving values we must allocate curret-> next */
  current -> next = malloc(sizeof(person));
  current -> age = a;
  current -> height = b;
  current -> next -> next = NULL;
}
printf("\n");
/* Print Linked List */
current = head;
while ( current -> next != NULL){
  printf("%d %d\n", current->age, current->height);
  current = current -> next;
}

/* Remove Last Item */
 current = head;
 person * tmp = malloc(sizeof(person));
 while( current -> next != NULL){
   tmp = current;
   current = current -> next;
 }
  current = tmp;
  free(current->next);
  current -> next = NULL;
  free(tmp->next);
  free(tmp);
/*  --------------- */

printf("\n");
 /* Print Linked List */
 current = head;
 while ( current -> next != NULL){
   printf("%d %d\n", current->age, current->height);
   current = current -> next;
 }

/* free all */
current = head;
person * tmp2 = malloc(sizeof(person));
while (current -> next != NULL){
  tmp2 = current -> next;
  free(current);
  current = tmp2;
}

free(tmp2);
free(head);
}
