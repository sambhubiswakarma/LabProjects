#include<stdio.h>

//sum function
int sum(int *p, int *q){
int s;
s = (*p) + (*q);
return s;
}

//main function
int main(){
  int a, b, *p, *q, s;
  p = &a;
  q = &b;
  printf("Enter two numbers : ");
  scanf("%d %d", &a, &b);
  s = sum(p, q);
  printf("sum : %d",s);
  return 0;
}
