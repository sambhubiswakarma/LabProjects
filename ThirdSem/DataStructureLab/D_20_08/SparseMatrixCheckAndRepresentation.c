#include<stdio.h>

//function to check if matrix is sparse or not
int sparseCheck(int mat[100][100],int r, int c){
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
  return count;
}


//Sparse Matrix Representation
void sparseMatrixRep(int mat[100][100], int r, int c, int count){
  int sparseMatRep[3][r*c], k = 0, l = 0, temp;
  for(int i = 0 ; i < r ; i++){
    for(int j = 0 ; j < c ; j++){
      sparseMatRep[k][l] = i;
      sparseMatRep[k+1][l] = j;
      sparseMatRep[k+2][l] = mat[i][j];
      k = 0;
      l++;
    }
}
printf("\n Sparse Matrix Representaton\n");
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < l ; j++){
      printf("%d ",sparseMatRep[i][j]);
    }
    printf("\n");
  }
for(int i = 0 ; i < l ; i++){
  temp = sparseMatRep[0][i];
  sparseMatRep[0][i] = sparseMatRep[1][i];
  sparseMatRep[1][i] = temp;
  }
  printf("\n Transpose of Sparse Matrix Representaton\n");
    for(int i = 0 ; i < 3 ; i++){
      for(int j = 0 ; j < l ; j++){
        printf("%d ",sparseMatRep[i][j]);
      }
      printf("\n");
    }
}



int main(){
  int mat[100][100], r, c, count;
  printf("Enter the row number : \n");
  scanf("%d", &r);
  printf("Enter the col number : \n");
  scanf("%d", &c);
  for(int i = 0 ; i < r ; i++){
    for(int j = 0 ; j < c ; j++){
      scanf("%d", &mat[i][j]);
    }
  }
count = sparseCheck(mat, r, c);
sparseMatrixRep(mat, r, c, count);
return 0;
}
