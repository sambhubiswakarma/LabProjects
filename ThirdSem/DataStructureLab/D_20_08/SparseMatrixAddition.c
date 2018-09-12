#include<stdio.h>

//function to check if matrix is sparse or not
int sparseCheck(int mat1[100][100],int r1, int c1,int mat2[100][100],int r2, int c2){
  //code
  int count1 = 0, count2 = 0;
  for(int i = 0 ; i < r1 ; i++){
    for(int j = 0 ; j < c1 ; j++){
      if(mat1[i][j] == 0){
        count1++;
      }
    }
  }
  if(count1 >= (r1*c1)/2){
    printf("First Matrix is sparse matrix\n");
  }else{
    printf("First Matrix is not sparse matrix\n");
  }

  for(int i = 0 ; i < r2 ; i++){
    for(int j = 0 ; j < c2 ; j++){
      if(mat2[i][j] == 0){
        count2++;
      }
    }
  }
  if(count2 >= (r2*c2)/2){
    printf("Second Matrix is sparse matrix\n");
  }else{
    printf("Second Matrix is not sparse matrix\n");
  }
  return 0;
}


// //Sparse Matrix Representation
void sparseMatrixAddition(int mat1[100][100], int r1, int c1, int mat2[100][100], int r2, int c2){
  int sparseMatRep1[3][r1*c1], sparseMatRep2[3][r2*c2], addition[3][100], l = 0, temp, rp1, rp2, count = 0, k = 0;

}
//for First matrix
  for(int i = 0 ; i < r1 ; i++){
    for(int j = 0 ; j < c1 ; j++){
      if(mat1[i][j] != 0){
      sparseMatRep1[0][l] = i;
      sparseMatRep1[1][l] = j;
      sparseMatRep1[2][l] = mat1[i][j];
      //k = 0;
      l++;
    }
    }
}
printf("\nSparse Matrix Representaton for First Matrix\n");
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < l ; j++){
      printf("%d ",sparseMatRep1[i][j]);
    }
    printf("\n");
}   rp1 = l;
    //for Second Matrix
     l = 0;
    for(int i = 0 ; i < r2 ; i++){
      for(int j = 0 ; j < c2 ; j++){
        if(mat2[i][j] != 0){
        sparseMatRep2[0][l] = i;
        sparseMatRep2[1][l] = j;
        sparseMatRep2[2][l] = mat2[i][j];
      //  k = 0;
        l++;
      }
      }
  }
  printf("\nSparse Matrix Representaton for Second Matrix\n");
    for(int i = 0 ; i < 3 ; i++){
      for(int j = 0 ; j < l ; j++){
        printf("%d ",sparseMatRep2[i][j]);
      }
    printf("\n");
  }
rp2 = l;


//counting the same indexes

// for(int i = 0 ; i < rp1 ; i++){
//   addition[0][i] = sparseMatRep1[0][i];
//   addition[1][i] = sparseMatRep1[1][i];
//   addition[2][i] = sparseMatRep1[2][i];
//   for(int j = 0 ; j < rp2 ; j++){
//     if(sparseMatRep2[0][j] == sparseMatRep1[0][i] && sparseMatRep2[1][j] == sparseMatRep1[1][i]){
//       // addition[2][i] = addition[2][i] + sparseMatRep2[2][j];
//       count++;
//     }
//   }
// }
//addition

  for(int i = 0 ; i < rp1 ; i++){
    addition[0][i] = sparseMatRep1[0][i];
    addition[1][i] = sparseMatRep1[1][i];
    addition[2][i] = sparseMatRep1[2][i];

    k++;
    for(int j = 0 ; j < rp2 ; j++){
      if(sparseMatRep2[0][j] == sparseMatRep1[0][i] && sparseMatRep2[1][j] == sparseMatRep1[1][i]){
        addition[2][i] = addition[2][i] + sparseMatRep2[2][j];
        sparseMatRep2[2][j] = 0;
        count++;
      }
    }
  }
  int i = 0;
  for(int j = k ; i <= rp2-count ;  i++){
    if(sparseMatRep2[2][i] != 0){
      addition[0][j] = sparseMatRep2[0][i];
      addition[1][j] = sparseMatRep2[1][i];
      addition[2][j] = sparseMatRep2[2][i];

      j++;
      //count++;
    }
  }
  // for(int i = 0 ; i < 3 ; i++){
  //   for(int j = 0 ; j < lg ; j++){
  //     if(sparseMatRep1[i][j] > 0 && sparseMatRep2[i][j] < 1){
  //       addition[i][j] = sparseMatRep1[i][j];
  //     }else if(sparseMatRep1[i][j] < 1 && sparseMatRep2[i][j] > 0){
  //       addition[i][j] = sparseMatRep2[i][j];
  //     }else if(sparseMatRep1[i][j] != 0 && sparseMatRep2[i][j] != 0){
  //       addition[i][j] = sparseMatRep2[i][j] + sparseMatRep1[i][j];;
  //     }
  //   }
  // }
   //printing sparseMatrix addition
   //printf("count %d",count);
   printf("\nSparse Matrix Representaton for added sparse Matrix\n");
     for(int i = 0 ; i < 3 ; i++){
       for(int j = 0 ; j < (rp1+rp2)-count ; j++){
         printf("%d ",addition[i][j]);
       }
     printf("\n");
   // }
   // printf("rp1 %d",rp1);
   //  printf("rp2 %d",rp2);
   //   printf("k %d",k);
   //    printf("count %d",count);
  return ;
}



int main(){
  int mat1[100][100], r1, c1, mat2[100][100], r2, c2;
  printf("Enter the details for First Matrix:\n");
  printf("Enter the row number : \n");
  scanf("%d", &r1);
  printf("Enter the col number : \n");
  scanf("%d", &c1);
  for(int i = 0 ; i < r1 ; i++){
    for(int j = 0 ; j < c1 ; j++){
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Enter the details for Second Matrix:\n");
  printf("Enter the row number : \n");
  scanf("%d", &r2);
  printf("Enter the col number : \n");
  scanf("%d", &c2);
  for(int i = 0 ; i < r2 ; i++){
    for(int j = 0 ; j < c2 ; j++){
      scanf("%d", &mat2[i][j]);
    }
  }
sparseCheck(mat1, r1, c1, mat2, r2, c2);
sparseMatrixAddition(mat1, r1, c1, mat2, r2, c2);
return 0;

}
