/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年08月31日 10时17分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

int main(){
  double i;

  for(i = 0; i != 10; i+=0.1){
    printf("%.11f\n", i);
  }
  return 0;
}

