#include<stdio.h>

//function to check if matrix is sparse or not
void sparseCheck(int mat[100][100],int r, int c){
  //code
  float count = 0;
  for(int i = 0 ; i < r ; i++){
    for(int j = 0 ; j < c ; j++){
      if(mat[i][j] == 0){
        count++;
      }
    }
  }
  if(count >= (r*c)/2){
    printf("It is sparse matrix");
  }else{
    printf("It is not sparse matrix");
  }
}

int main(){
  int mat[100][100], r, c;
  printf("Enter the row number : \n");
  scanf("%d", &r);
  printf("Enter the col number : \n");
  scanf("%d", &c);
  for(int i = 0 ; i < r ; i++){
    for(int j = 0 ; j < c ; j++){
      scanf("%d", &mat[i][j]);
    }
  }
sparseCheck(mat, r, c);
return 0;
}
