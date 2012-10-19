/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  大数阶乘
 *
 *        Version:  1.0
 *        Created:  2012年09月20日 20时13分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

#define MAXSIZE 1024

int array[MAXSIZE] = {0};

int main(){
  int n;
  int i;
  
  int j;
  
  scanf("%d", &n);
  array[0] = 1;
  
  for(i = 2; i <= n; i++)   {
    int c = 0;
    
    for(j = 0; j < MAXSIZE; j++){
      int s = array[j] * i + c;
      array[j] = s % 10;
      c = s / 10;
          }
  }
    
  for(i = MAXSIZE - 1; i >= 0; i--){
    if(array[i]){
      printf("%d\n", array[i]);
      break;
    }
  }
    
  for(j = i; j >= 0; j--){
    printf("%d", array[j]);
  }
  printf("\n");
  
  return 0;
}

