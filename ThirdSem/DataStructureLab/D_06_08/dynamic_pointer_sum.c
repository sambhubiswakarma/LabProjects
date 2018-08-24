#include<stdio.h>
#include<malloc.h>
int main(){
  int  *p, sum = 0, n, num;

  printf("Enter the number of elements : ");
  scanf("%d", &n);
  p = (int *)malloc(n*sizeof(int));
  //printf("%d",*p);



  printf("Enter the numbers : \n");
  for(int i = 0 ; i < n ; i++){
    scanf("%d", &num);
    (*p) = num;
    sum = sum + (*p);
    p++;
  }

  printf("Sum : %d\n", sum);
  return 0;

}
