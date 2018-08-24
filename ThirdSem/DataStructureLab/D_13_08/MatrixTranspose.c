#include<stdio.h>

int main(){
  int mat[3][3];
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      scanf("%d",&mat[i][j]);
    }
  }
printf("Before Transpose:\n");
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      printf("%d ",mat[i][j] );
    }
    printf("\n");
  }

printf("After Transpose : \n");
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      printf("%d ",mat[j][i] );
    }
    printf("\n");
  }
  return 0;
}
