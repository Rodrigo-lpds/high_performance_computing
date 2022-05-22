#include<stdio.h>  
#include <stdlib.h>
#include <time.h>

int main(){    
  int i=0,j=0;
  int n = 1024;
  double A[n][n], x[n],b[n],time_consumed;
  clock_t time;
  clock_t t_0;

  for(i=0; i < n; i++){
    x[i] = rand();
    for(j=0; j < n; j++){
      A[i][j] = rand(); 
    }
  }
  time = clock();

  for(i=0; i < n; i++){
    for(j=0; j < n; j++){
      b[i] = b[i] + A[i][j] * x[j]; 
    }
  }

  time =  clock() - time;
  time_consumed  = ((double) time)/CLOCKS_PER_SEC;
  printf("It took %f seconds for execution of matrix multiplication of %i order.. \n", time_consumed, n);

  return 0;  
}  