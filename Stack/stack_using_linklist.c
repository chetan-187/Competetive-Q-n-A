/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node{
  int data;
  struct Node *next;
}Node;

typedef struct {
  struct Node *head;
  struct Node *tail;
  int nodeCount;
}LinkedList;

// function prototypes
void initList(LinkedList *);
void push(LinkedList *, int);
void printList(LinkedList *);
int pop(LinkedList *);

void initList(LinkedList *lstPtr){
  lstPtr->head = NULL;
  lstPtr->tail = NULL;
  lstPtr->nodeCount = 0;
}

void push(LinkedList *listPtr, int data){
  Node *newNodePtr = (Node*)malloc(sizeof(Node));
  if (newNodePtr == NULL){
    printf("Unable to allocate new node\n");
    return;
  }
  newNodePtr->data = data;
  newNodePtr->next = NULL;


  if (listPtr->nodeCount == 0){
    listPtr->head = newNodePtr;
    listPtr->tail = newNodePtr;
  }
  else{
    newNodePtr->next = listPtr->head;
    listPtr->head = newNodePtr;
  }
  listPtr->nodeCount++;
}

void printList(LinkedList *lstPtr){
  if (lstPtr->nodeCount == 0){
    printf("Linked list is empty\n");
    return;
  }
  printf("Printing details\n");
  printf("HEAD: %p\n", lstPtr->head);
  int counter = 1;
  Node *current = lstPtr->head;
  while(current != NULL){
    printf("Node No: %3d. (Current Address: %p)[Data: %5d | Next address: %p]\n", counter, current, current->data, current->next);
    current = current->next;
    counter++;
  }
  printf("TAIL: %p\n", lstPtr->tail);
}

int pop(LinkedList *lstPtr){
  if (lstPtr->nodeCount == 0){
    return -9999;
  }
  Node *first = lstPtr->head;
  int data = first->data;

  if (lstPtr->nodeCount == 1){
    lstPtr->head = NULL;
    lstPtr->tail = NULL;

  }
  else{
    lstPtr->head = first->next;
  }
  free(first);
  lstPtr->nodeCount --;
  return data;
}


void menu(){
  printf("    Stack using LinkedList\n");
  printf("----------------------------------------\n");
  printf("1. Push\n");
  printf("2. Pop\n");
  printf("3. Display\n");
  printf("4. Quit\n");
}

int main(){
  LinkedList stack;
  initList(&stack);
  int choice;
  int quit = 0;
  int data;

  do{
    menu();
    printf("Please input your choice: ");
    scanf("%d", &choice);

    switch(choice){
      case 1:
              printf("Input data to Push: ");
              scanf("%d", &data);
              push(&stack, data);
              break;
      case 2:
            data = pop(&stack);
            if (data != -9999){
              printf("Poped data is: %d\n", data);
            }
            else{
              printf("Stack underflow\n");
            }

            break;
      case 3:
            printList(&stack);
            break;
      case 4:
            quit = 1;
            break;
      default:
            printf("Invalid option chosen, valid option is from 1 - 4\n");
    }
  }while(!quit);

  return 0;
}
*/
