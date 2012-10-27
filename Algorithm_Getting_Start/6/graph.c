/*
 * =====================================================================================
 *
 *       Filename:  graph.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月27日 22时45分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define MAX 1000

int points[MAX][MAX];

void init(){
  memset(points, 0, sizeof(points));
}

int isAdjacent(int sourceX, int sourceY, int desX, int desY){
  if(fabs(sourceX - desX) <= 1 && fabs(sourceY - desY) <= 1){
    return 1;
  }
   
  return 0;
}

int main(){
  int size = 8;
  init();
  int cnt, cnt2;
  
  for(cnt = 0; cnt < size; cnt++){
    for(cnt2 = 0; cnt2 < size; cnt2++){
      scanf("%d", &points[cnt][cnt2]);
    }
  }
  
  
  return 0;
}

