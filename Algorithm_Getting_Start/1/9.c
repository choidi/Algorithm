/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年08月31日 11时18分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  double n;
  int i;

  for(i = 1; ; i++){
    if((double) 1 / (2 * i + 1) < 0.000006){
      break;
    }
    printf("%f\n", n);
    n += (double ) 1 / (2 * n + 1) * pow(-1, n);
  }
  return 0;
}

