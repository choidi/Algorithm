/*
 * =====================================================================================
 *
 *       Filename:  1067.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年10月26日 19时27分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

int main(){
  int a, b, min, max;

  while(scanf("%d", &a) != 0){
    scanf("%d", &b);
    if(a >= b){
      max = a;
      min = b;
    }
    else{
      max = b;
      min = a;
    }

    if(max >= 2 * min )
      printf("1\n");
    else
      printf("0\n");
  }
  return 0;
}

