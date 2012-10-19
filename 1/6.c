/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  hanxindianbing
 *
 *        Version:  1.0
 *        Created:  2012年08月31日 10时49分13秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

int main(){
  int max = 100;
  int i;
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  for(i = 1; i <=100; i++){
    if(i % 3 == a){
      if(i % 5 == b){
        if(i % 7 == c){
          printf("There are %d people\n", i);
          break;

        }
      }
    }
  }
  printf("No answer\n");
  return 0;
}

