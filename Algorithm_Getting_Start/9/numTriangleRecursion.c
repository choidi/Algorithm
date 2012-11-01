/*
 * =====================================================================================
 *
 *       Filename:  numTriangleRecursion.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年11月01日 16时28分05秒
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

int recursion(int i, int j){
  if(d[i][j] >= 0)  
    return d[i][j];

  return d[i][j] = a[i][j] + max(recursion(i + 1, j), recursion(i + 1, j + 1));
}

int main(){
  int i, j;

  recursion(0, 0);

  for(i = 0; i < 4; i++)
    for(j = 0; j < 4; j++)
      printf("%d\n", d[i][j] + 1);

  return 0;
}

