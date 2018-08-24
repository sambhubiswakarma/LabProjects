#include<stdio.h>

struct sum{
  int arr[100];
};

int main(){
  int n, sm = 0;
  struct sum s;
  scanf("%d",&n);
  for(int i = 0 ; i < n ; i++){
    scanf("%d",&s.arr[i]);
    sm = sm + s.arr[i];
  }
  printf("Sum : %d",sm);
  return 0;
}
