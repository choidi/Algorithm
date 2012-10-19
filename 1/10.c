/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年08月31日 16时25分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include  <limits.h>


int main(){
  int n;
  int queue[1024];
  int i;
  int last;

  scanf("%d", &n);
  last = n - 1;
  for(i = 0; i < n; i++){
    queue[i] = i + 1;
  }

  while(n >= 2){
    for(i = 0; i <= last; i++) {
      if(queue[i] != 0){
        printf("%d ", queue[i]);
        queue[i] = 0;
        queue[last+1] = queue[i+1];
        queue[i+1] = 0;
        last += 1;
        break;
      }      
      
    }
    n -= 1;    
  }

  printf("%d\n", queue[last]);
  printf("last:%d\n", last);
  return 0;
}

