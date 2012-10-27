/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年08月31日 10时59分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

int main(){
  int n;
  int i;
  int j;
  int cnt = 1;

  scanf("%d", &n);
  for(i = 2 * n + 1; i >= 1;){
    for(j = 1; j <= cnt; j++){
      printf(" ");
    }
    for(j = 1; j <= i; j++){
      printf("#");
    }
    printf("\n");
    i -= 2;
    cnt++;
  }
  return 0;
}

