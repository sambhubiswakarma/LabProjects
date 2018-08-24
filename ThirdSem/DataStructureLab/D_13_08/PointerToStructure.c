#include<stdio.h>

struct sum{
  int arr[100];
};

int main(){
  int n, sm = 0;
  struct sum s, *p;
  p = &s;
  scanf("%d",&n);
  for(int i = 0 ; i < n ; i++){
    scanf("%d",&p->arr[i]);
    // = val;
    sm = sm + p->arr[i];
  }
  printf("Sum : %d",sm);
  return 0;
}
