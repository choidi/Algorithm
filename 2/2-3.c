/*
 * =====================================================================================
 *
 *       Filename:  2-3.c
 *
 *    Description:  
 *        阶乘之和
 *        Version:  1.0
 *        Created:  2012年08月29日 15时57分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(){
  int n, i, j;
  int sum = 0;
  
  scanf("%d", &n);
  for(i = 1; i <= n; i++){
    int fac = 1;
    
    for(j = 1; j <= i; j++){
      fac *= j;
    }
    
    sum += fac;
  }
 
  
  printf("%d\n", sum);
  printf("Time used = %.21f\n", (double)clock()/CLOCKS_PER_SEC);
  return 0;
}

