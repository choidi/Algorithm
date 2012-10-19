/*
 * =====================================================================================
 *
 *       Filename:  lignt.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月15日 11时05分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

#define MAXSIZE 1024


int main(){
  int lightNum;
  int peopleNum;
  int cnt;
  int cntTwo;
  int lights[MAXSIZE] = {0};

  scanf("%d", &lightNum);
  scanf("%d", &peopleNum);

  for(cnt = 1; cnt <= peopleNum; cnt++){
    for(cntTwo = 1; cntTwo <= lightNum; cntTwo++){
      if(cntTwo % cnt == 0){
        lights[cntTwo] = !lights[cntTwo];
      }
    }
  }

  for(cntTwo = 1; cntTwo <= lightNum; cntTwo++){
    if(lights[cntTwo] == 1){
      printf("%d ", cntTwo);
    }
  }
  printf("\n");
  return 0;
}

