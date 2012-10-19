/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  find out the max, min and average 
 *
 *        Version:  1.0
 *        Created:  2012年08月31日 09时26分54秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


int main(){
  int x;
  int max = 0;
  int min = INT_MAX;
  int sum = 0;
  int cnt = 1;

#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  while(scanf("%d", &x) == 1){
    if(x < min){
      min = x;
    }
    if(x > max){
      max = x;
    }

    sum += x;
    cnt++;

  }

  printf("INT:%d\n", INT_MAX);
  printf("average:%f\nmin:%d\nmax:%d\n", (double)sum / cnt, min, max);
  return 0;
}

