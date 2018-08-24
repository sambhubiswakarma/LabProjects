#include<stdio.h>

//sum array
int arr_sum(int arr[], int n){
int *p, sum = 0;
p = &arr[0];
for(int i = 0 ; i < n ; i++){
  sum = sum + (*p);
  p++;
}
return sum;
}


int main(){

  int arr[5], sum, n;
  printf("Enter the number of elements you want to enter : ");
  scanf("%d", &n);
  printf("Now enter the numbers : ");
  for(int i = 0 ; i < n ; i++){
    scanf("%d\n", &arr[i]);
  }
  sum = arr_sum(arr, n);
  printf("%d\n", sum);
  return 0;
}
