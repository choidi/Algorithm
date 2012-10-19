/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  harmony
 *
 *        Version:  1.0
 *        Created:  2012年08月31日 11时13分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

int main(){
  double h = 0;
  int n;
  int i;

  scanf("%d", &n);
  for(i = 1; i <= n; i++){
    h += (double)1 / i;
   printf("%.3f\n", h);
  }

  return 0;
}

