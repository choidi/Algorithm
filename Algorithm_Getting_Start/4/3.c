/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月20日 16时47分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

int main(){
  int cnt = 1;
  char character;
  
  while((character = getchar()) != EOF){
   if(character == '"'){
    if(cnt == 1){
      character = '\'';
    }
    else{
      character = '`';
    }
    cnt = !cnt;
   }
   printf("%c", character);
  }
  
  printf("\n");
  return 0;
}

