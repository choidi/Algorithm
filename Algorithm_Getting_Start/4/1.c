/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月20日 16时06分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

typedef struct Point{
  double x;
  double y;
}point;

int main(){
  point mpoint;
  
  mpoint.x = 1;
  mpoint.y = 2.0;
  printf("x:%f, y:%f\n", mpoint.x, mpoint.y);
  
  return 0;
}

