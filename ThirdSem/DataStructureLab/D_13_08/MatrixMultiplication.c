#include<stdio.h>



int main(){
  int mat1[3][3], mat2[3][3], mat3[3][3], sum = 0;



  //matrix 1
  printf("Enter the elements of the matrix1 : \n");
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      scanf("%d",&mat1[i][j]);
    }
  }
  //printing matrix before multiplication
  printf("Matrix 1:\n");
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      printf("%d",mat1[i][j]);
    }
    printf("\n");
  }


  //matrix 2
  printf("Enter the elements of the matrix2 : \n");
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      scanf("%d",&mat2[i][j]);
    }
  }
  //printing matrix before multiplication
  printf("Matrix 2:\n");
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      printf("%d",mat2[i][j]);
    }
    printf("\n");
  }

//matrix multiplication
for(int i = 0 ; i < 3 ; i++){
  for(int j = 0 ; j < 3 ; j++){
    for(int k = 0 ; k < 3 ; k++){

 sum = sum + mat1[i][k]*mat2[k][j];

    }
    mat3[i][j] = sum;
    sum = 0;
  }
}
//matrix after multiplication
printf("Matrix after multiplication : \n");
for(int i = 0 ; i < 3 ; i++){
  for(int j = 0 ; j < 3 ; j++){
    printf("%d ",mat3[i][j]);
  }
  printf("\n");
}

  return 0;
}
