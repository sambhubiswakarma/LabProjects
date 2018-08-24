#include<stdio.h>

//swap function
void swap(int *p, int *q){
int s;
s = (*p);
(*p) = (*q);
(*q) = s;
}

//main function
int main(){
  int a, b, *p, *q, s;
  p = &a;
  q = &b;
  printf("Enter two numbers : ");
  scanf("%d %d", &a, &b);

  //before swapping
  printf("Before swapping \n");
  printf("a : %d \nb : %d\n", a, b);

  //swapping function called
  swap(p, q);

  //after swaping
  printf("After swapping\n");
  printf("a : %d \nb : %d\n", a, b);
  return 0;
}
