/*
 * =====================================================================================
 *
 *       Filename:  2-2.c
 *
 *    Description:  
 *        注意大数溢出问题
 *        Version:  1.0
 *        Created:  2012年08月29日 15时45分41秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

int main(){
  unsigned int n;
  int cnt = 0;
  
  scanf("%u", &n);
  while(n != 1.0){
    if(n % 2 == 1){
      n = 3 * n + 1;
    }
    else{
      n = n / 2;
    }
    cnt++;
    printf("n:%u\n", n);
  }
  printf("%d\n", cnt);
  
  return 0;
}

