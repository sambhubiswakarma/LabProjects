#include<stdio.h>
#include<malloc.h>
struct Node{
  int data;
  struct Node *next;
};

struct Node *head = NULL;

//push
void push(){
  //code
  struct Node *newnode, *node;
  newnode = (struct Node*)malloc(sizeof(struct Node));
  printf("Enter the number : ");
  scanf("%d",&newnode->data);
  //newnode->next = NULL;
  newnode->next = head;
  head = newnode;
  free(newnode);
  //free(node);
}

//pop
void pop(){
  //code
  struct Node *node;
  if(head == NULL){
    printf("List is empty!");
  }else{
  struct Node *node;
  node = head;
  head = node->next;
}
//free(node);
}

void display(){
  //code
  int count = 0;
  struct Node *node;
  node = head;
  printf("%p",node);
  printf("display reached");
  while(count < 3){
    count++;
    printf("%d",count);
    printf("%d",node->data);
    node = node->next;
  }
  //free(node);
}

int main(){
  int n, choice;
  printf("Enter the number of element : ");
  scanf("%d",&n);
  for(int i = 0 ; i < n ; i++){
    push();
  }
  printf("1.push\n2.pop\nEnter your choice :");
  scanf("%d",&choice);
  switch(choice){
  case 1 : push();
           printf("List after Push:\n");
           display();
              break;
  case 2 : pop();
           printf("List after Pop:\n");
           display();
              break;
  default : printf("Invalid Input!");
  }
  return 0;
}
