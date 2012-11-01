/*
 * =====================================================================================
 *
 *       Filename:  numTriangleIterator.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年11月01日 15时44分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include "numTriangle.h"

int max(int a, int b){
  if(a > b)
    return a;
  else 
    return b;
}

int main(){
  int i, j;
  int maxSum = 0;

  for(j = 0; j < 4; j++)
    d[3][j] = a[3][j];

  for(i = 2; i >= 0; i-- )
    for(j = 0; j < 4; j++)
      d[i][j] = a[i][j] + max(d[i + 1][j], d[i + 1][j + 1]);
  
  for(i = 0; i < 4; i++)
    for(j = 0; j < 4; j++)
      if(d[i][j] > maxSum)  
        maxSum = d[i][j];

  printf("%d\n", maxSum);
  return 0;
}

