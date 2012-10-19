/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description: get the period in a string周期串
 *  
 *
 *        Version:  1.0
 *        Created:  2012年09月20日 16时55分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

int main(){
  int a;
  int b;
  int c = 0;
  int cnt;
  
  while(scanf("%d%d", &a, &b) == 2){
    if(!a && !b ) break;
    cnt = 0;
    while(a != 0 || b != 0){
      c = (a % 10 + b % 10 + c) > 9 ? 1 : 0;
      a /= 10;
      b /= 10;
      cnt += c;
    }
    printf("%d\n", cnt);
  }
  return 0;
}

